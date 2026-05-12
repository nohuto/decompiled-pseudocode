/*
 * XREFs of StorpQueueWorkItem @ 0x1C003C088
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00323CC (WPP_SF_.c)
 *     WPP_SF_qqq @ 0x1C0032770 (WPP_SF_qqq.c)
 */

__int64 __fastcall StorpQueueWorkItem(__int64 a1, signed __int64 a2, volatile signed __int64 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct _IO_WORKITEM *v5; // rcx

  v4 = 0;
  if ( a1 && a2 && a3 )
  {
    if ( *((_DWORD *)a3 + 6) )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x3Eu,
          (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
      }
      return (unsigned int)-1056964596;
    }
    if ( KeGetCurrentIrql() <= 2u )
    {
      if ( !_InterlockedCompareExchange64(a3 + 1, a2, 0LL) )
      {
        v5 = (struct _IO_WORKITEM *)*a3;
        *((_QWORD *)a3 + 2) = a4;
        IoQueueWorkItem(v5, (PIO_WORKITEM_ROUTINE)StorPortWorkItemRoutine, DelayedWorkQueue, (PVOID)a3);
        return v4;
      }
      return (unsigned int)-1056964596;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Fu,
        (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Du,
        (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids,
        a1,
        a2,
        a3);
    }
    return (unsigned int)-1056964602;
  }
}
