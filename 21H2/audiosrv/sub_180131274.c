/*
 * XREFs of sub_180131274 @ 0x180131274
 * Callers:
 *     sub_1801313F0 @ 0x1801313F0 (sub_1801313F0.c)
 * Callees:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180131274(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v6; // ebp
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r9
  int v11; // eax
  int v12; // edi
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v6 = a2;
  pv = 0LL;
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v8 = -2147024809;
    goto LABEL_16;
  }
  v9 = 0LL;
  if ( a3 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 40LL))(a3);
    if ( !v9 )
      goto LABEL_5;
  }
  v10 = 0LL;
  if ( a4 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, a2, a3, 0LL);
    if ( !v10 )
      goto LABEL_5;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, LPVOID *))(**(_QWORD **)(a1 + 56) + 40LL))(
          *(_QWORD *)(a1 + 56),
          v6,
          v9,
          v10,
          &pv);
  v8 = v11;
  if ( v11 < 0 )
    goto LABEL_14;
  v12 = v11;
  if ( !pv )
  {
LABEL_5:
    v8 = -2004287480;
    goto LABEL_14;
  }
  v8 = sub_18001F490((unsigned __int16 *)pv, (unsigned int)*((unsigned __int16 *)pv + 8) + 18, a5, 0.0, 1);
  if ( v8 < 0 )
  {
LABEL_14:
    if ( (unsigned int)dword_18019C4B8 > 2 )
    {
      LODWORD(v17) = v8;
      LODWORD(v14) = 294;
      v16 = (__int64)"CAPOWrapperClient::IsAudioFormatSupported";
      sub_180109778(
        (__int64)&dword_18019C4B8,
        byte_18016C251,
        a3,
        v10,
        (const CHAR **)&v16,
        (__int64)&v14,
        (__int64)&v17);
    }
    goto LABEL_16;
  }
  if ( v12 )
    v8 = v12;
LABEL_16:
  CoTaskMemFree(pv);
  return (unsigned int)v8;
}
