/*
 * XREFs of sub_180016ADC @ 0x180016ADC
 * Callers:
 *     sub_180039484 @ 0x180039484 (sub_180039484.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180016ADC(__int64 *a1, __int128 *a2, _DWORD *a3, _DWORD *a4)
{
  signed int LastError; // eax
  signed int v9; // ebx
  int v10; // edx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 (__fastcall *v14)(__int64 *, __int128 *, __int64, __int64 *, int *); // rax
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0LL;
  if ( !GetActiveProcessorCount(0xFFFFu) )
  {
    LastError = GetLastError();
    v9 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v9 = LastError;
    if ( v9 >= 0 )
      return (unsigned int)v9;
    v10 = 348;
LABEL_6:
    sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v9);
    return (unsigned int)v9;
  }
  v12 = *a1;
  v13 = *a2;
  v15 = 8;
  v14 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64 *, int *))(v12 + 64);
  v17 = v13;
  v9 = v14(a1, &v17, 18LL, &v16, &v15);
  if ( v9 < 0 )
  {
    v10 = 352;
    goto LABEL_6;
  }
  *a3 = v16;
  *a4 = HIDWORD(v16);
  return 0LL;
}
