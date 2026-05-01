/*
 * XREFs of sub_18004494C @ 0x18004494C
 * Callers:
 *     sub_180044BD4 @ 0x180044BD4 (sub_180044BD4.c)
 * Callees:
 *     _amsg_exit @ 0x180044F1D (_amsg_exit.c)
 *     _IsNonwritableInCurrentImage @ 0x180044F80 (_IsNonwritableInCurrentImage.c)
 *     _initterm @ 0x180045108 (_initterm.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004494C(__int64 a1, int a2, __int64 a3)
{
  int v5; // r14d
  PVOID StackBase; // rsi
  signed __int64 v7; // rax
  void (**v8)(void); // rbp
  void (**v9)(void); // rsi
  void *v10; // r12
  __int64 v11; // r15
  void (*v12)(void); // rax
  int v13; // ebp
  PVOID v14; // rsi
  signed __int64 v15; // rax
  __int64 (**v16)(void); // rsi
  int v17; // eax

  if ( !a2 )
  {
    if ( dword_1800B3680 > 0 )
    {
      v5 = 0;
      --dword_1800B3680;
      StackBase = NtCurrentTeb()->NtTib.StackBase;
      while ( 1 )
      {
        v7 = _InterlockedCompareExchange64(&qword_1800B3D10, (signed __int64)StackBase, 0LL);
        if ( !v7 )
          break;
        if ( (PVOID)v7 == StackBase )
        {
          v5 = 1;
          break;
        }
        Sleep(0x3E8u);
      }
      if ( dword_1800B3D18 == 2 )
      {
        v8 = (void (**)(void))Block;
        if ( Block )
        {
          v9 = (void (**)(void))qword_1800B3D20;
          v10 = Block;
          v11 = qword_1800B3D20;
          while ( --v9 >= v8 )
          {
            v12 = *v9;
            if ( *v9 )
            {
              *v9 = 0LL;
              v12();
              if ( v10 != Block || v11 != qword_1800B3D20 )
              {
                v10 = Block;
                v8 = (void (**)(void))Block;
                v11 = qword_1800B3D20;
                v9 = (void (**)(void))qword_1800B3D20;
              }
            }
          }
          free(v8);
          qword_1800B3D20 = 0LL;
          Block = 0LL;
        }
        dword_1800B3D18 = 0;
        if ( !v5 )
          _InterlockedExchange64(&qword_1800B3D10, 0LL);
      }
      else
      {
        amsg_exit(31LL);
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( a2 == 1 )
  {
    v13 = 0;
    v14 = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v15 = _InterlockedCompareExchange64(&qword_1800B3D10, (signed __int64)v14, 0LL);
      if ( !v15 )
        break;
      if ( (PVOID)v15 == v14 )
      {
        v13 = 1;
        break;
      }
      Sleep(0x3E8u);
    }
    if ( dword_1800B3D18 )
    {
      amsg_exit(31LL);
    }
    else
    {
      v16 = (__int64 (**)(void))&unk_180094B98;
      dword_1800B3D18 = 1;
      v17 = 0;
      if ( &unk_180094B98 < (_UNKNOWN *)&qword_180094BA8 )
      {
        while ( !v17 )
        {
          if ( *v16 )
            v17 = (*v16)();
          if ( ++v16 >= &qword_180094BA8 )
          {
            if ( !v17 )
              goto LABEL_37;
            return 0LL;
          }
        }
        return 0LL;
      }
LABEL_37:
      initterm((_PVFV *)&First, (_PVFV *)&Last);
      dword_1800B3D18 = 2;
    }
    if ( !v13 )
      _InterlockedExchange64(&qword_1800B3D10, 0LL);
    if ( qword_1800B3D30 && (unsigned int)IsNonwritableInCurrentImage(&qword_1800B3D30) )
      ((void (__fastcall *)(__int64, __int64, __int64))qword_1800B3D30)(a1, 2LL, a3);
    ++dword_1800B3680;
  }
  return 1LL;
}
