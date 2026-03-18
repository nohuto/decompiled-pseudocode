/*
 * XREFs of _xxxUpdateSystemIconsFromRegistry@4 @ 0xD8AEE
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _RtlInitUnicodeStringOrId@8 @ 0xABF7C (_RtlInitUnicodeStringOrId@8.c)
 *     ?zzzSetSystemImage@@YGXPAUtagCURSOR@@0@Z @ 0xD9236 (-zzzSetSystemImage@@YGXPAUtagCURSOR@@0@Z.c)
 *     _xxxClientLoadImage@28 @ 0xD94BC (_xxxClientLoadImage@28.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall xxxUpdateSystemIconsFromRegistry(int a1)
{
  int i; // esi
  int v2; // ecx
  int v3; // edi
  int Image; // eax
  int v5; // ecx
  INT DpiForSystem; // eax
  INT v7; // eax
  int v8; // eax
  int v9; // eax
  int DpiDependentMetric; // [esp-Ch] [ebp-234h]
  int v11; // [esp-4h] [ebp-22Ch]
  struct tagCURSOR *v12; // [esp+0h] [ebp-228h]
  struct tagCURSOR *v13; // [esp+4h] [ebp-224h]
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-21Ch] BYREF
  int v15; // [esp+14h] [ebp-214h]
  WCHAR SourceString[262]; // [esp+18h] [ebp-210h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v15 = a1;
  for ( i = 0; i < 7; ++i )
  {
    FastGetProfileStringFromIDW(a1, 5, (unsigned __int16)word_26AE52[268 * i], byte_FC318, SourceString, 260, 0);
    if ( SourceString[0] )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v3 = 592;
    }
    else
    {
      RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(unsigned __int16)(i + 100));
      v3 = 576;
    }
    Image = xxxClientLoadImage(1, 0, 0, v3, v2);
    if ( Image && (*(_BYTE *)(Image + 44) & 0x40) == 0 )
      zzzSetSystemImage(v12, v13);
    if ( i == 5 )
    {
      if ( _HMObjectFromHandle(*(_DWORD *)(_gpsi + 6220)) )
      {
        v11 = v5;
        DpiForSystem = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
        v7 = GetDpiForSystem();
        v8 = GetDpiDependentMetric(20, v7);
        v9 = xxxClientLoadImage(1, v8, DpiDependentMetric, v3, v11);
        if ( v9 )
        {
          if ( (*(_BYTE *)(v9 + 44) & 0x40) == 0 )
            zzzSetSystemImage(v12, v13);
        }
      }
    }
    a1 = v15;
  }
}
