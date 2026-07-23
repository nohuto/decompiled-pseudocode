/*
 * XREFs of PdcTaskClientRegister @ 0x140798BA8
 * Callers:
 *     PopDiagInitialize @ 0x140A41D18 (PopDiagInitialize.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PdcPortOpenCommon @ 0x1407CFAA8 (PdcPortOpenCommon.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PdcTaskClientRegister(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edi
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2;
  PopSleepStudyTaskClientActivator = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63636450u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v8 = 0LL;
    *v3 = 1667458128;
    v3[8] = 68;
    v6 = PdcPortOpenCommon(v5, v4, (_DWORD)v3, (unsigned int)&v8);
    if ( !v6 )
    {
      PopSleepStudyTaskClientActivator = (__int64)v3;
      v3 = 0LL;
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
