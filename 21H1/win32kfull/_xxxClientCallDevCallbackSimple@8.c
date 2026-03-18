/*
 * XREFs of _xxxClientCallDevCallbackSimple@8 @ 0x193820
 * Callers:
 *     _EditionInputExtensibilityCallout@8 @ 0x15AC2A (_EditionInputExtensibilityCallout@8.c)
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __fastcall xxxClientCallDevCallbackSimple(int a1, _DWORD *a2)
{
  int v3; // esi
  int *v4; // ecx
  int v5; // edx
  char *v6; // esi
  _BYTE v8[24]; // [esp+10h] [ebp-F8h] BYREF
  int v9; // [esp+30h] [ebp-D8h]
  int v10; // [esp+34h] [ebp-D4h] BYREF
  unsigned int v11; // [esp+38h] [ebp-D0h] BYREF
  _BYTE v12[24]; // [esp+3Ch] [ebp-CCh] BYREF
  int v13; // [esp+54h] [ebp-B4h]
  int v14; // [esp+58h] [ebp-B0h]
  _BYTE v15[144]; // [esp+5Ch] [ebp-ACh] BYREF
  CPPEH_RECORD ms_exc; // [esp+F0h] [ebp-18h]

  v11 = 0;
  v10 = 0;
  memset(v12, 0, sizeof(v12));
  v14 = 0;
  v13 = a1;
  qmemcpy(v15, a2, sizeof(v15));
  EtwTraceBeginCallback(122);
  v3 = KeUserModeCallback(122, v12, 176, &v11, &v10);
  EtwTraceEndCallback(122);
  if ( v3 < 0 || v10 != 12 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v4 = (int *)v11;
  if ( v11 + 4 < v11 || v11 + 4 > _MmUserProbeAddress )
    v4 = (int *)_MmUserProbeAddress;
  v5 = *v4;
  v9 = *v4;
  ms_exc.registration.TryLevel = -2;
  if ( a2[1] == 1 )
  {
    ms_exc.registration.TryLevel = 1;
    v6 = *(char **)(v11 + 8);
    if ( v6 + 24 < v6 || (unsigned int)(v6 + 24) > _MmUserProbeAddress )
      v6 = (char *)_MmUserProbeAddress;
    qmemcpy(v8, v6, sizeof(v8));
    qmemcpy(a2 + 12, v8, 0x18u);
    ms_exc.registration.TryLevel = -2;
  }
  return v5;
}
