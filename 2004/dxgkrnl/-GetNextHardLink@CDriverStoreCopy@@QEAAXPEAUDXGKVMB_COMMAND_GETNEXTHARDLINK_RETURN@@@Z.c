/*
 * XREFs of ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1C0263064
 * Callers:
 *     ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241E60 (-VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000AE88 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall CDriverStoreCopy::GetNextHardLink(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN *a2)
{
  char *v2; // rcx
  size_t **v4; // rbx
  size_t *v5; // rax

  v2 = (char *)this + 1608;
  v4 = *(size_t ***)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *v4, (size_t **)(*v4)[1] != v4) )
    __fastfail(3u);
  *(_QWORD *)v2 = v5;
  v5[1] = (size_t)v2;
  if ( v4 == (size_t **)v2 )
  {
    *(_DWORD *)a2 = -2147483642;
  }
  else
  {
    RtlStringCbCopyW((unsigned __int16 *)a2 + 266, 0x208uLL, (size_t *)((char *)v4 + 36));
    RtlStringCbCopyW((unsigned __int16 *)a2 + 6, 0x208uLL, v4[3]);
    *((_DWORD *)a2 + 1) = *((_DWORD *)v4 + 4);
    *((_DWORD *)a2 + 2) = *((_DWORD *)v4 + 5);
    operator delete[](v4);
    *(_DWORD *)a2 = 0;
  }
}
