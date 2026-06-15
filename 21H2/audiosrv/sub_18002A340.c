/*
 * XREFs of sub_18002A340 @ 0x18002A340
 * Callers:
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180029DDC @ 0x180029DDC (sub_180029DDC.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002A340(__int64 a1, void *a2, __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  unsigned int v8; // esi
  _DWORD *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v15[0] = 0LL;
  v17 = 0;
  v8 = 0;
  v9 = a5;
  if ( a3 && !a5 )
  {
    v11 = -2147024809;
    v13 = 7096LL;
LABEL_15:
    v14 = v11;
    goto LABEL_16;
  }
  v15[0] = 0LL;
  v10 = sub_180029DDC(0LL, *(_QWORD *)(a1 + 40), v15);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = (unsigned int)v10;
    v13 = 7098LL;
LABEL_16:
    sub_18004BD84(retaddr, v13, "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp", v14);
    goto LABEL_9;
  }
  if ( v9 )
  {
    *v9 = 0;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v15[0] + 96LL))(v15[0], &v17) >= 0 )
    {
      if ( a3 )
      {
        v8 = 834 * v17;
        if ( a4 < (unsigned int)(834 * v17) )
        {
          v11 = -2147024774;
          v13 = 7108LL;
          goto LABEL_15;
        }
      }
    }
  }
  if ( (*(int (__fastcall **)(__int64, void *, __int64, _QWORD))(*(_QWORD *)v15[0] + 104LL))(v15[0], a2, a3, v8) < 0 )
    memset(a2, 0, 0x48uLL);
  else
    *v9 = v17;
  v11 = 0;
LABEL_9:
  sub_18000F708(v15);
  return v11;
}
