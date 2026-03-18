/*
 * XREFs of ?InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C016E5DC
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C016DC78 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0021D58 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
        ADAPTER_RENDER *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 Length; // r11
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  const unsigned __int16 *v7; // r14
  unsigned int v10; // edi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r11
  _QWORD *v17; // rax
  struct _UNICODE_STRING v18; // [rsp+20h] [rbp-28h]
  unsigned __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int128)*a2;
  Length = a2->Length;
  v5 = 0LL;
  LODWORD(v6) = 0;
  v19 = 0LL;
  *(_DWORD *)(&v18.MaximumLength + 1) = DWORD1(v3);
  v7 = (const unsigned __int16 *)*((_QWORD *)&v3 + 1);
  v10 = 0;
  while ( 1 )
  {
    if ( !Length )
      return (unsigned int)v6;
    v7 += v5 >> 1;
    v18.Buffer = (wchar_t *)v7;
    v12 = RtlStringCbLengthW(v7, Length, &v19);
    v6 = v12;
    if ( v12 < 0 )
      break;
    v5 = v19;
    v18.Length = v19;
    if ( v16 > v19 )
    {
      v5 = v19 + 2;
      v19 += 2LL;
    }
    v18.MaximumLength = v5;
    ++v10;
    Length = v16 - (unsigned __int16)v5;
    *a3++ = v18;
    if ( v10 )
      return (unsigned int)v6;
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
  v17[3] = v10;
  v17[4] = *((_QWORD *)this + 2);
  v17[5] = v6;
  WdLogEvent5_WdWarning(v17);
  return 0LL;
}
