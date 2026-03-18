/*
 * XREFs of VfDriverLoadImage @ 0x1409C50A0
 * Callers:
 *     MiFinalizeDriverImage @ 0x140755DA8 (MiFinalizeDriverImage.c)
 *     VfDriverEnableVerifier @ 0x1409CB630 (VfDriverEnableVerifier.c)
 *     VfInitBootDriversLoaded @ 0x140A4D7D4 (VfInitBootDriversLoaded.c)
 *     VfDriverLoadBootDrivers @ 0x140A4D8D4 (VfDriverLoadBootDrivers.c)
 * Callees:
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     VfTargetDriversAdd @ 0x1403714FC (VfTargetDriversAdd.c)
 *     VfSuspectDriversLoadCallback @ 0x1409DCBA8 (VfSuspectDriversLoadCallback.c)
 */

void __fastcall VfDriverLoadImage(__int64 a1, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int64 v4; // r10
  int v5; // r11d
  __int64 v6; // rcx
  char v8; // r8

  v4 = a1;
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    v8 = *(_BYTE *)(*(_QWORD *)MiSectionControlArea(v6) + 15LL) >> 4;
  else
    v8 = 12;
  if ( ViVerifierDriverAddedThunkListHead )
  {
    VfSuspectDriversLoadCallback(v4, a2, v8, v5, a4);
  }
  else if ( !a4 )
  {
    VfTargetDriversAdd(*(_QWORD *)(v4 + 48), *(_DWORD *)(v4 + 64), v8, 0LL);
  }
}
