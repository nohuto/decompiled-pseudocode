/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x140250710
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F32D4 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiCaptureDeleteHierarchy(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        _DWORD *a4)
{
  _BYTE *v6; // rsi
  __int64 v7; // rbp
  __int64 **v8; // rdi
  unsigned int v9; // ebx
  __int64 *v10; // r10
  __int64 v11; // rcx
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-50h]
  unsigned __int64 v18; // [rsp+40h] [rbp-48h]

  *a4 = 0;
  v6 = a4;
  v7 = 2LL;
  do
  {
    v18 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v17 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = (__int64 **)&v16;
    v16 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = 0;
    while ( 1 )
    {
      v10 = *v8;
      v11 = **v8;
      if ( (unsigned __int64)*v8 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v14 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v10 >> 3) & 0x1FF));
          v15 = v11 | 0x20;
          if ( (v14 & 0x20) == 0 )
            v15 = **v8;
          v11 = v15;
          if ( (v14 & 0x42) != 0 )
            v11 = v15 | 0x42;
        }
      }
      if ( !v11 )
        break;
      if ( (v11 & 1) == 0 && v9 != 2 )
        MiMakeSystemAddressValid((__int64)((_QWORD)v10 << 25) >> 16, 0LL, 0, a3, 1);
      ++v9;
      ++v8;
      if ( v9 >= 3 )
        goto LABEL_7;
    }
    *v6 = 1 << (2 - v9);
LABEL_7:
    ++v6;
    result = 0xFFFFF6FB40000000uLL;
    a1 = a2;
    --v7;
  }
  while ( v7 );
  return result;
}
