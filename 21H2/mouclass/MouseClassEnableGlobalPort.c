/*
 * XREFs of MouseClassEnableGlobalPort @ 0x1C000E000
 * Callers:
 *     MouseClassPlugPlayNotification @ 0x1C000E2C0 (MouseClassPlugPlayNotification.c)
 * Callees:
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 */

__int64 __fastcall MouseClassEnableGlobalPort(PVOID *a1, char a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r8d
  PFILE_OBJECT *v7; // rsi
  char v8; // bl

  v4 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  }
  else
  {
    v5 = 0;
    if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      goto LABEL_6;
    while ( *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v5 + 19)
         || *((PVOID **)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v5 + 1) != a1 )
    {
      if ( ++v5 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_6;
    }
    v7 = (PFILE_OBJECT *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v5);
    if ( !v7 )
    {
LABEL_6:
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      return 3221225486LL;
    }
    v8 = *((_BYTE *)v7 + 16);
    *((_BYTE *)v7 + 16) = a2;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( a2 != v8 )
      return (unsigned int)MouEnableDisablePort(a2, 0LL, a1, v7);
  }
  return v4;
}
