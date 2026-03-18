/*
 * XREFs of PostPlaySoundMessage @ 0x1C00B381C
 * Callers:
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 PostPlaySoundMessage()
{
  if ( qword_1C0250308 )
    return qword_1C0250308();
  else
    return 3221225659LL;
}
