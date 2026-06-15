/*
 * XREFs of sub_1800FBF0C @ 0x1800FBF0C
 * Callers:
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800FC8A0 @ 0x1800FC8A0 (sub_1800FC8A0.c)
 *     sub_1800FF980 @ 0x1800FF980 (sub_1800FF980.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800FBF0C(_QWORD *pv)
{
  int v2; // esi
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  unsigned __int16 v8; // dx
  LPVOID pva; // [rsp+60h] [rbp+28h] BYREF
  LPVOID v11; // [rsp+68h] [rbp+30h] BYREF
  __int64 v12; // [rsp+70h] [rbp+38h] BYREF
  __int64 v13; // [rsp+78h] [rbp+40h] BYREF

  v2 = 0;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  pva = 0LL;
  if ( !pv[9] )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(pv[24] + 64LL) + 32LL))(
           *(_QWORD *)(pv[24] + 64LL),
           1LL,
           0LL,
           &v13) < 0 )
      goto LABEL_25;
    v3 = v13;
    sub_18002A504(&v11, 0LL);
    if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v3 + 40LL))(v3, &v11) < 0 )
      goto LABEL_25;
    v4 = pv + 16;
    if ( pv[19] >= 8uLL )
      v4 = (_QWORD *)*v4;
    if ( (unsigned int)o__wcsnicmp(v4, v11, pv[18]) )
      goto LABEL_13;
  }
  if ( !pv[13]
    && (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(pv[24] + 64LL) + 32LL))(
         *(_QWORD *)(pv[24] + 64LL),
         0LL,
         0LL,
         &v12) >= 0 )
  {
    v5 = v12;
    sub_18002A504(&pva, 0LL);
    if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v5 + 40LL))(v5, &pva) >= 0 )
    {
      v6 = pv + 20;
      if ( pv[23] >= 8uLL )
        v6 = (_QWORD *)*v6;
      if ( (unsigned int)o__wcsnicmp(v6, pva, pv[22]) )
      {
LABEL_13:
        sub_180104244(pv[25]);
        sub_1800FF980(pv);
        v2 = sub_1800FC8A0(pv);
        if ( v2 >= 0 )
        {
          if ( *((_BYTE *)pv + 49) )
          {
            v2 = sub_18010393C(pv[25]);
            if ( v2 < 0 )
            {
              v7 = off_18019C348;
              if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
                && *((_BYTE *)off_18019C348 + 25) >= 2u )
              {
                v8 = 65;
                goto LABEL_24;
              }
            }
          }
        }
        else
        {
          v7 = off_18019C348;
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 2u )
          {
            v8 = 64;
LABEL_24:
            sub_1800BB4E0(v7[2], v8, (__int64)&unk_180172650, v2);
          }
        }
      }
    }
  }
LABEL_25:
  if ( pva )
    CoTaskMemFree(pva);
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v2;
}
