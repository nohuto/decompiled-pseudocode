/*
 * XREFs of MiFindEmptyAddressRangeDown @ 0x1405EB104
 * Callers:
 *     MiSelectUserAddress @ 0x1406EA100 (MiSelectUserAddress.c)
 * Callees:
 *     MiFindEmptyAddressRangeDownTree @ 0x1405EB218 (MiFindEmptyAddressRangeDownTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDown(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  _KPROCESS *Process; // rdx
  int v16; // eax
  __int64 v17; // r8
  int EmptyAddressRangeDownTree; // eax
  int v19; // ecx
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+78h] [rbp+10h]
  int v23; // [rsp+98h] [rbp+30h]

  if ( a6 - a5 + 1 < a2 )
    return 3221225495LL;
  v12 = a6 + 1;
  v13 = *(_QWORD *)(a1 + 56);
  v14 = a6 + 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v23 = (int)Process;
  if ( a6 + 1 > *(_QWORD *)(a1 + 48) )
    v14 = *(_QWORD *)(a1 + 48);
  v16 = *(_DWORD *)(a1 + 64);
  v17 = (unsigned __int8)v16;
  if ( !(_BYTE)v16 )
    v17 = 1LL;
  v22 = v17;
  if ( v13 < a5 )
    v13 = a5;
  while ( 1 )
  {
    if ( v13 >= a6 || a6 - v13 + 1 < a2 )
    {
      v19 = -1073741801;
    }
    else
    {
      EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree((int)Process + 2008, a2, a3, a4, v13, v14, a8);
      v17 = v22;
      v19 = EmptyAddressRangeDownTree;
    }
    if ( v19 >= 0 )
      break;
    if ( v14 == v12 || (a7 & 2) != 0 )
    {
      v21 = v17 << 16;
      if ( (a7 & 2) == 0 )
        v21 = 0x10000LL;
      if ( v21 < a5 )
        v21 = a5;
      if ( v21 >= v13 )
        return (unsigned int)v19;
      LODWORD(Process) = v23;
      v13 = v21;
    }
    else
    {
      LODWORD(Process) = v23;
      v14 = a6 + 1;
    }
  }
  return (unsigned int)v19;
}
