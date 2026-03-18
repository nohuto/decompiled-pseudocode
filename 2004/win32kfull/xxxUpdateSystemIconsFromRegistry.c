/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C005A7AC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C004320C (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     xxxClientLoadImage @ 0x1C0043B54 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C005CE2C (RtlInitUnicodeStringOrId.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // esi
  unsigned __int8 *Image; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagCURSOR *v9; // rbp
  unsigned int DpiForSystem; // eax
  __int64 v11; // r8
  unsigned int DpiDependentMetric; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned __int8 *v19; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  DestinationString = 0LL;
  for ( i = 0; i < 7; ++i )
  {
    v3 = 552LL * i;
    FastGetProfileStringFromIDW(
      a1,
      5LL,
      *(unsigned __int16 *)((char *)&gasysico + v3 + 2),
      &word_1C02E3EA4,
      SourceString,
      260,
      0);
    if ( SourceString[0] )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v5 = 592;
    }
    else
    {
      RtlInitUnicodeStringOrId(&DestinationString, (unsigned __int16)(i + 100));
      v5 = 576;
    }
    Image = xxxClientLoadImage((void **)&DestinationString, v4, 1u, 0, 0, v5);
    if ( Image && (*((_DWORD *)Image + 20) & 0x40) == 0 )
      zzzSetSystemImage((struct tagCURSOR *)Image, *(struct tagCURSOR **)((char *)&gasysico + v3 + 8));
    if ( i == 5 )
    {
      v9 = (struct tagCURSOR *)_HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL));
      if ( v9 )
      {
        DpiForSystem = GetDpiForSystem(v8, v7);
        DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem, v11);
        v15 = GetDpiForSystem(v14, v13);
        v17 = GetDpiDependentMetric(20LL, v15, v16);
        v19 = xxxClientLoadImage((void **)&DestinationString, v18, 1u, v17, DpiDependentMetric, v5);
        if ( v19 )
        {
          if ( (*((_DWORD *)v19 + 20) & 0x40) == 0 )
            zzzSetSystemImage((struct tagCURSOR *)v19, v9);
        }
      }
    }
  }
}
