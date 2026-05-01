/*
 * XREFs of sub_1800434A0 @ 0x1800434A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E874 @ 0x18003E874 (sub_18003E874.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     CoTaskMemFree @ 0x18004550E (CoTaskMemFree.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800434A0(IUnknown *a1, IStream *a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  HRESULT v11; // esi
  _QWORD *v12; // rax
  unsigned __int64 lpVtbl_low; // rbx
  unsigned __int64 v14; // rbx
  void *v15; // rdi
  int v16; // eax
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h] BYREF

  v11 = sub_1800436D4(a1);
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, IStream *, __int64, __int64, int, __int64, int))(MEMORY[0] + 40LL))(
            0LL,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( v11 >= 0 && a5 != 3 )
    {
      v12 = (_QWORD *)((__int64 (__fastcall *)(IUnknown *))a1->lpVtbl[3].Release)(a1);
      if ( *v12 || v12[1] )
      {
        v11 = IStream_Write(a2, &a1[4], 4u);
        if ( v11 >= 0 )
        {
          v11 = (*(__int64 (__fastcall **)(IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)a2 + 40LL))(
                  a2,
                  0LL,
                  1LL,
                  &v20);
          if ( v11 >= 0 )
          {
            v11 = ((__int64 (__fastcall *)(IUnknown *, IStream *, __int64, __int64, int, __int64, int))a1->lpVtbl[3].AddRef)(
                    a1,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7);
            if ( v11 >= 0 )
            {
              v11 = (*(__int64 (__fastcall **)(IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)a2 + 40LL))(
                      a2,
                      0LL,
                      1LL,
                      &v19);
              if ( v11 >= 0 )
              {
                lpVtbl_low = LODWORD(a1[4].lpVtbl);
                if ( v19 - v20 <= lpVtbl_low )
                {
                  if ( v19 - v20 < lpVtbl_low )
                  {
                    v14 = lpVtbl_low - (v19 - v20);
                    if ( v14 <= 0xFFFFFFFF )
                    {
                      v15 = 0LL;
                      pv = 0LL;
                      if ( is_mul_ok((unsigned int)v14, 1uLL) )
                      {
                        v16 = sub_18003E874(
                                (IMalloc *)(unsigned int)v14,
                                ((unsigned int)v14 * (unsigned __int128)1uLL) >> 64,
                                (unsigned int)v14,
                                &pv);
                        v15 = pv;
                        v11 = v16;
                        if ( v16 >= 0 )
                          v11 = IStream_Write(a2, pv, v14);
                      }
                      else
                      {
                        v11 = -2147024362;
                      }
                      CoTaskMemFree(v15);
                    }
                    else
                    {
                      return (unsigned int)-2147024362;
                    }
                  }
                }
                else
                {
                  return (unsigned int)-2147467259;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v11;
}
