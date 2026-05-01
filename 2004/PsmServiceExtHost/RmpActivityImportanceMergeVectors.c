/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x18001DED0
 * Callers:
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001D320 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  __int16 v2; // bx
  __int16 v3; // r11
  __int16 v4; // di
  __int16 v5; // bx
  __int16 v6; // bx
  __int16 v7; // ax
  __int16 v8; // r8
  __int16 v9; // bx
  __int16 v10; // r8
  __int16 v11; // bx
  __int16 v12; // r8
  __int16 v13; // bx
  __int16 v14; // r8
  __int16 v15; // r10
  __int16 v16; // ax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v21; // [rsp+10h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v2 = (unsigned __int16)a1 >> 4;
  v3 = (unsigned __int16)a1 >> 1;
  v4 = a1 | a2;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 4) & 3) <= (unsigned __int8)(((unsigned __int16)a2 >> 4) & 3) )
    v2 = (unsigned __int16)a2 >> 4;
  v5 = 8 * (v2 & 3);
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 1) & 7) <= (unsigned __int8)(((unsigned __int16)a2 >> 1) & 7) )
    v3 = (unsigned __int16)a2 >> 1;
  v6 = 2 * (v3 & 7 | v5);
  v7 = 0;
  v8 = 0;
  if ( (v4 & 0x100) != 0 )
    v8 = 256;
  v9 = v8 | v6;
  v10 = 0;
  if ( (v4 & 0x80) != 0 )
    v10 = 128;
  v11 = v10 | v9;
  v12 = 1;
  if ( (v4 & 0x40) != 0 )
    v12 = 65;
  v13 = v12 | v11;
  if ( (v4 & 0x200) != 0 )
    v14 = 512;
  else
    v14 = 0;
  if ( (v4 & 0x400) != 0 )
    v7 = 1024;
  v15 = (unsigned __int16)a1 >> 11;
  v16 = v14 | v13 | v7;
  if ( (unsigned __int8)((a1 & 0x800) != 0) >= (unsigned __int8)((a2 & 0x800) != 0) )
    LOBYTE(v15) = (unsigned __int16)a2 >> 11;
  LOWORD(v21) = v16 | ((v15 & 1) << 11);
  v17 = HIBYTE(a1);
  if ( HIBYTE(a1) > HIBYTE(a2) )
  {
    HIBYTE(v21) = HIBYTE(a1);
    v18 = HIWORD(a1);
LABEL_24:
    BYTE2(v21) = v18;
    return v21;
  }
  if ( HIBYTE(a1) >= HIBYTE(a2) )
  {
    v18 = HIWORD(a1);
    v19 = HIWORD(a2);
    HIBYTE(v21) = v17;
    if ( (unsigned __int8)v18 <= (unsigned __int8)v19 )
    {
      BYTE2(v21) = v19;
      return v21;
    }
    goto LABEL_24;
  }
  BYTE2(v21) = BYTE2(a2);
  HIBYTE(v21) = HIBYTE(a2);
  return v21;
}
