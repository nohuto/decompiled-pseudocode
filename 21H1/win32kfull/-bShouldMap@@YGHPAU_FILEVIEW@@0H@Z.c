/*
 * XREFs of ?bShouldMap@@YGHPAU_FILEVIEW@@0H@Z @ 0x8CC46
 * Callers:
 *     ?bMapRoutine@@YGHPAU_FONTFILEVIEW@@PAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x8CBA4 (-bMapRoutine@@YGHPAU_FONTFILEVIEW@@PAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 * Callees:
 *     ?bIsOneHourDifference@@YGHPAU_FILEVIEW@@0@Z @ 0x1E8F1D (-bIsOneHourDifference@@YGHPAU_FILEVIEW@@0@Z.c)
 */

BOOL __userpurge bShouldMap@<eax>(int a1@<edx>, int a2@<ecx>, struct _FILEVIEW *a3, struct _FILEVIEW *a4, int a5)
{
  int v6; // esi
  struct _FILEVIEW *v8; // [esp+0h] [ebp-Ch]
  struct _FILEVIEW *v9; // [esp+4h] [ebp-8h]

  v6 = 0;
  if ( !*(_QWORD *)a1
    || *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16)
    && (*(_DWORD *)a1 == *(_DWORD *)a2 && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
     || a3 && bIsOneHourDifference(v8, v9)
     || _gbGUISetup) )
  {
    v6 = 1;
    if ( (*(_BYTE *)(a1 + 24) & 0x10) != 0 )
      return (*(_BYTE *)(a2 + 24) & 0x10) != 0;
  }
  return v6;
}
