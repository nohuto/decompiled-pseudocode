/*
 * XREFs of sub_180046A30 @ 0x180046A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180029F54 @ 0x180029F54 (sub_180029F54.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180046A30(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rax
  void *v4; // rdi
  void *v5; // rcx
  unsigned __int16 v6; // r8
  unsigned __int16 *v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rdx
  void **v10; // rdx
  LPVOID v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  LPVOID pv; // [rsp+70h] [rbp+20h] BYREF
  __int64 v17; // [rsp+78h] [rbp+28h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(**(_QWORD **)v1 + 140LL) )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(v1 + 8) + 56LL))(**(_QWORD **)(v1 + 8)) )
    {
      if ( (unsigned int)sub_180029F54(**(_QWORD **)(v1 + 8)) )
      {
        v3 = *(_QWORD **)(v1 + 16);
        v4 = (void *)*v3;
        if ( *(_WORD *)(*v3 + 2LL) == 2 && !(unsigned int)sub_18004BB48(*v3) )
        {
          pv = 0LL;
          *(_QWORD *)&v14 = &pv;
          *((_QWORD *)&v14 + 1) = 0LL;
          v15 = 1;
          **(_DWORD **)(v1 + 24) = sub_180048714(v4);
          if ( v15 )
          {
            v5 = *(void **)v14;
            *(_QWORD *)v14 = *((_QWORD *)&v14 + 1);
            if ( v5 )
              CoTaskMemFree(v5);
          }
          if ( **(int **)(v1 + 24) >= 0 )
          {
            *((_WORD *)pv + 1) = 8;
            v6 = 8 * (*((_WORD *)pv + 7) >> 3);
            *((_WORD *)pv + 6) = v6;
            *((_DWORD *)pv + 2) = *((_DWORD *)pv + 1) * v6;
            v7 = (unsigned __int16 *)pv;
            if ( *(_WORD *)pv == 0xFFFE )
            {
              *((_DWORD *)pv + 5) = 1599;
              v7 = (unsigned __int16 *)pv;
            }
            v14 = *(_OWORD *)*(_QWORD *)(v1 + 32);
            **(_DWORD **)(v1 + 24) = sub_18001E300(
                                       **(_QWORD **)(v1 + 8),
                                       &v14,
                                       *(_DWORD *)(**(_QWORD **)v1 + 52LL),
                                       **(unsigned __int16 ***)(v1 + 16),
                                       v7,
                                       0LL);
            v8 = *(_DWORD **)(v1 + 24);
            if ( !*v8 )
            {
              v17 = 0LL;
              sub_1800CB144(&v17);
              **(_DWORD **)(v1 + 24) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618
                                                                                             + 32LL))(
                                         qword_18019E618,
                                         **(_QWORD **)(v1 + 40),
                                         &v17);
              if ( **(int **)(v1 + 24) >= 0 )
              {
                LOBYTE(v9) = 1;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 504LL))(v17, v9);
                v10 = *(void ***)(v1 + 16);
                v11 = pv;
                pv = 0LL;
                v12 = *v10;
                *v10 = v11;
                if ( v12 )
                  CoTaskMemFree(v12);
              }
              sub_18000F708(&v17);
              v8 = *(_DWORD **)(v1 + 24);
            }
            *v8 = 0;
          }
          v13 = pv;
          pv = 0LL;
          if ( v13 )
            CoTaskMemFree(v13);
        }
      }
    }
  }
  return 0LL;
}
