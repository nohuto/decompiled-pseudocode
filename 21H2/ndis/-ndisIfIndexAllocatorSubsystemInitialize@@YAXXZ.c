/*
 * XREFs of ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C0143828
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145088 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C01075F4 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 */

void __fastcall ndisIfIndexAllocatorSubsystemInitialize(struct _DRIVER_OBJECT *a1)
{
  int v1; // ecx
  char v2[4]; // [rsp+28h] [rbp-30h]
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+40h] [rbp-18h]

  v4 = 0;
  v3[0] = L"InitialIfIndex";
  v3[1] = dword_1C00E49D4;
  ndisReadRegistryKnobs(a1, (const struct NDIS_REGISTRY_KNOB *)v3, 1uLL);
  v1 = *(_DWORD *)dword_1C00E49D4;
  if ( (unsigned int)(*(_DWORD *)dword_1C00E49D4 - 1) > 0x7FFE )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v2 = *(_DWORD *)dword_1C00E49D4;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x16u,
        0xAu,
        (struct _GUID *)&WPP_9dce56da390c33c6d21cbd31c5ab688d_Traceguids,
        *(_DWORD *)v2);
    }
    v1 = 1;
    *(_DWORD *)dword_1C00E49D4 = 1;
  }
  dword_1C00E4400 = 1;
  xmmword_1C00E4408 = 0LL;
  dword_1C00E4404 = v1;
  xmmword_1C00E4420 = 0LL;
  dword_1C00E4418 = v1;
  dword_1C00E441C = 0xFFFF;
}
