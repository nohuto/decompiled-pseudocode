/*
 * XREFs of MiRebuildPageTableLeafAges @ 0x140285060
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x140285180 (MiCountWslesInPageTable.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiRebuildPageTableLeafAges(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v7; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 v9; // cl
  int v10; // edx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v17[8]; // [rsp+28h] [rbp-30h] BYREF

  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = *(_QWORD *)v3;
  if ( (unsigned int)MiPteInShadowRange(v3, a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v4 | 0x20;
      v12 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
      if ( (v12 & 0x20) == 0 )
        v5 = v4;
      v4 = v5;
      if ( (v12 & 0x42) != 0 )
        v4 = v5 | 0x42;
    }
  }
  v16 = v4;
  if ( (unsigned int)MiPteInShadowRange(&v16, v5) )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 && (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v13 = Process[1].ProcessListEntry.Flink;
        if ( v13 )
        {
          v14 = *((_QWORD *)&v13->Flink + (((unsigned __int64)&v16 >> 3) & 0x1FF));
          v15 = v4 | 0x20;
          Process = (_KPROCESS *)(unsigned __int8)v14;
          LOBYTE(Process) = v14 & 0x20;
          if ( (v14 & 0x20) == 0 )
            v15 = v4;
          v4 = v15;
          if ( (v14 & 0x42) != 0 )
            v4 = v15 | 0x42;
        }
      }
    }
  }
  v7 = (unsigned __int64 *)(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  result = (unsigned __int64)*(unsigned int *)v7 >> 4;
  if ( (result & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(Process, a2, v17);
    v9 = 8;
    while ( 1 )
    {
      result = --v9;
      v10 = v17[v9];
      if ( v10 )
        break;
      if ( !v9 )
        return result;
    }
    result = *v7 & 0xFFFFFFFFFFFE000FuLL;
    *v7 = result | (16 * (v10 & 0x3FF | ((unsigned __int64)(v9 & 7) << 10)));
  }
  return result;
}
