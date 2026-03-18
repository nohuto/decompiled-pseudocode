/*
 * XREFs of ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1C01B6E4C
 * Callers:
 *     InputInitialize @ 0x1C0034604 (InputInitialize.c)
 * Callees:
 *     ivrFindImageProcAddress @ 0x1C01B73D8 (ivrFindImageProcAddress.c)
 */

void __fastcall ivrInitAllwin32knsDelayLoads(void *a1)
{
  void *v1; // rbx

  v1 = ghModwin32kns;
  if ( ghModwin32kns )
  {
    gpfnIVInitialize = (int (*)(int *))ivrFindImageProcAddress(ghModwin32kns, "IVInitialize");
    gpfnIVUninitialize = (int (*)(void))ivrFindImageProcAddress(v1, "IVUninitialize");
    gpfnIVRegisterChildLifetimeNotifications = (int (*)(struct _ETHREAD *, struct _ETHREAD *, int (*)(void *), unsigned int, void **))ivrFindImageProcAddress(v1, "IVRegisterChildLifetimeNotifications");
    gpfnIVUnregisterChildLifetimeNotifications = (int (*)(void *))ivrFindImageProcAddress(
                                                                    v1,
                                                                    "IVUnregisterChildLifetimeNotifications");
    gpfnIVSend = (int (*)(void *, unsigned int, struct _ETHREAD *, struct _ETHREAD *, unsigned int, int (*)(struct _IVSRContext *), const struct CONTAINER_ID *))ivrFindImageProcAddress(v1, "IVSend");
    gpfnIVRecv = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))ivrFindImageProcAddress(
                                                                                           v1,
                                                                                           "IVRecv");
    gpfnIVBroadcast = (int (*)(void *, unsigned int, struct _ETHREAD *, struct _ETHREAD *, unsigned int, int (*)(struct _IVSRContext *), const struct CONTAINER_ID *))ivrFindImageProcAddress(v1, "IVBroadcast");
    ivrFindImageProcAddress(v1, "IVFreeIVSRContext");
    gpfnIVResolveContainerId = (int (*)(const struct _GUID *, struct CONTAINER_ID *))ivrFindImageProcAddress(
                                                                                       v1,
                                                                                       "IVResolveContainerId");
    gpfnIVChildReInitialize = (int (*)(unsigned int))ivrFindImageProcAddress(v1, "IVChildReInitialize");
  }
}
