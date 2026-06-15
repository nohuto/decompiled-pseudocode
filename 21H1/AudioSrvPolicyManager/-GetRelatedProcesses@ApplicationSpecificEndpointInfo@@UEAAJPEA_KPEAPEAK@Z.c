/*
 * XREFs of ?GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z @ 0x180036DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xrange@?$vector@KV?$allocator@K@std@@@std@@CAXXZ @ 0x180038960 (-_Xrange@-$vector@KV-$allocator@K@std@@@std@@CAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetRelatedProcesses(
        ApplicationSpecificEndpointInfo *this,
        unsigned __int64 *a2,
        unsigned int **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned int *v8; // rdx
  unsigned __int64 i; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 *v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v7 = (__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 2;
  v8 = 0LL;
  *a2 = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)CoTaskMemAlloc(4 * v7);
    if ( !v8 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x8007000ELL);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 2147942414LL;
    }
    for ( i = 0LL; i < v7; ++i )
    {
      v11 = *((_QWORD *)this + 7);
      if ( (*((_QWORD *)this + 8) - v11) >> 2 <= i )
      {
        try
        {
          std::vector<unsigned long>::_Xrange();
          JUMPOUT(0x180036EECLL);
        }
        catch ( ... )
        {
          v13 = &v14;
          *((_DWORD *)v13 + 16) = wil::details::in1diag3::Return_CaughtException(
                                    (wil::details::in1diag3 *)v13[7],
                                    (void *)0x14A,
                                    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\appli"
                                             "cationspecificendpointinfo.cpp",
                                    v12);
          return (unsigned int)v16;
        }
      }
      v8[i] = *(_DWORD *)(v11 + 4 * i);
    }
  }
  *a3 = v8;
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
