/*
 * XREFs of ?AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z @ 0x1C0334CC4
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C0372240 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGK_VIRTUAL_GPU_PARAV *__fastcall DXGVIRTUALMACHINE::AcquireVirtualGpuByLuid(
        DXGVIRTUALMACHINE *this,
        struct _LUID *a2)
{
  char *v2; // rbp
  _QWORD *v5; // rdi
  _QWORD **v6; // rbx
  _QWORD *i; // r8
  _QWORD *v8; // rcx
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v2 = (char *)this + 64;
  v5 = 0LL;
  DXGPUSHLOCK::AcquireShared((DXGVIRTUALMACHINE *)((char *)this + 64));
  v6 = (_QWORD **)((char *)this + 40);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = i - 17;
    if ( *((_BYTE *)i + 16) && *((_DWORD *)v8 + 7) == a2->LowPart && *((_DWORD *)v8 + 8) == a2->HighPart )
    {
      if ( !*((_BYTE *)v8 + 154) )
      {
        v5 = i - 17;
        _m_prefetchw(v8 + 46);
        v9 = *((_DWORD *)v8 + 92);
        while ( v9 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)v8 + 92, v9 + 1, v9);
          if ( v10 == v9 )
            goto LABEL_13;
        }
        v5 = 0LL;
      }
      break;
    }
  }
LABEL_13:
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXGK_VIRTUAL_GPU_PARAV *)v5;
}
