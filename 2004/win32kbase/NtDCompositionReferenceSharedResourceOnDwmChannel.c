/*
 * XREFs of NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C009D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C002F9D4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C009B430 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C009B8C4 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C009C9DC (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C009D180 (-IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYP.c)
 *     UserIsCurrentProcessDwm @ 0x1C009D410 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionReferenceSharedResourceOnDwmChannel(
        __int64 a1,
        void *a2,
        unsigned int a3,
        _DWORD *a4,
        int *a5)
{
  unsigned int v8; // edi
  int v9; // r12d
  int v10; // ebx
  int v11; // edi
  __int64 v12; // r8
  PVOID v13; // rsi
  struct DirectComposition::CDwmChannel *v14; // r14
  struct DirectComposition::CDwmChannel *v16; // [rsp+28h] [rbp-30h] BYREF
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  v8 = a1;
  v9 = 0;
  v10 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm(a1) )
  {
    v16 = 0LL;
    v11 = DirectComposition::CDwmChannel::ReferenceHandleAndLock(v8, &v16);
    if ( v11 >= 0 )
    {
      Object = 0LL;
      LOBYTE(v12) = 1;
      v11 = DirectComposition::ResourceObject::ResolveHandle(
              a2,
              1LL,
              v12,
              (struct DirectComposition::ResourceObject **)&Object);
      if ( v11 >= 0 )
      {
        v13 = Object;
        if ( DirectComposition::CConnection::IsSystemResourceOfType(
               *((_QWORD *)Object + 5),
               *((_DWORD *)Object + 12),
               a3) )
        {
          v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 5) + 152LL) + 28LL);
          v10 = *((_DWORD *)v13 + 12);
          v14 = v16;
          DirectComposition::CApplicationChannel::PreallocateNextBatch(v16);
          v11 = DirectComposition::CBatch::AddSystemResourceRef(*((_QWORD *)v14 + 21), v10);
        }
        else
        {
          v11 = -1073741790;
        }
        ObfDereferenceObject(v13);
      }
      (**(void (__fastcall ***)(struct DirectComposition::CDwmChannel *))v16)(v16);
    }
  }
  else
  {
    v11 = -1073741790;
  }
  if ( v11 >= 0 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v9;
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v10;
  }
  return (unsigned int)v11;
}
