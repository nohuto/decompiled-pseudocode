/*
 * XREFs of MiRebuildPageTableLeafAges @ 0x140202200
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x140202320 (MiCountWslesInPageTable.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiRebuildPageTableLeafAges(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v6; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 v8; // cl
  int v9; // edx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v17[8]; // [rsp+28h] [rbp-30h] BYREF

  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = *(_QWORD *)v3;
  if ( (unsigned int)MiPteInShadowRange(v3)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = v4 | 0x20;
      v12 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
      if ( (v12 & 0x20) == 0 )
        v11 = v4;
      v4 = v11;
      if ( (v12 & 0x42) != 0 )
        v4 = v11 | 0x42;
    }
  }
  v16 = v4;
  if ( (unsigned int)MiPteInShadowRange(&v16) )
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
  v6 = (unsigned __int64 *)(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  result = (unsigned __int64)*(unsigned int *)v6 >> 4;
  if ( (result & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(Process, a2, v17);
    v8 = 8;
    while ( 1 )
    {
      result = --v8;
      v9 = v17[v8];
      if ( v9 )
        break;
      if ( !v8 )
        return result;
    }
    result = *v6 & 0xFFFFFFFFFFFE000FuLL;
    *v6 = result | (16 * (v9 & 0x3FF | ((unsigned __int64)(v8 & 7) << 10)));
  }
  return result;
}
