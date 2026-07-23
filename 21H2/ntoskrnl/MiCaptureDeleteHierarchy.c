/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x140309140
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4B14 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  _BYTE *v5; // rsi
  __int64 v6; // rbp
  __int64 **v7; // rdi
  unsigned int v8; // ebx
  __int64 *v9; // r10
  __int64 v10; // rcx
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-50h]
  unsigned __int64 v17; // [rsp+40h] [rbp-48h]

  *a4 = 0;
  v5 = a4;
  v6 = 2LL;
  do
  {
    v17 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v16 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = (__int64 **)&v15;
    v15 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = 0;
    while ( 1 )
    {
      v9 = *v7;
      v10 = **v7;
      if ( (unsigned __int64)*v7 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v10 & 1) != 0
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v9 >> 3) & 0x1FF));
          v14 = v10 | 0x20;
          if ( (v13 & 0x20) == 0 )
            v14 = **v7;
          v10 = v14;
          if ( (v13 & 0x42) != 0 )
            v10 = v14 | 0x42;
        }
      }
      if ( !v10 )
        break;
      if ( (v10 & 1) == 0 && v8 != 2 )
        MiMakeSystemAddressValid((__int64)((_QWORD)v9 << 25) >> 16, 1);
      ++v8;
      ++v7;
      if ( v8 >= 3 )
        goto LABEL_7;
    }
    *v5 = 1 << (2 - v8);
LABEL_7:
    ++v5;
    result = 0xFFFFF6FB40000000uLL;
    a1 = a2;
    --v6;
  }
  while ( v6 );
  return result;
}
