/*
 * XREFs of ?SearchIconCache@@YGPAUtagCURSOR@@PAU1@GPAU_UNICODE_STRING@@0PAUtagCURSORFIND@@@Z @ 0x48862
 * Callers:
 *     ?_FindExistingCursorIcon@@YGPAUtagCURSOR@@GPAU_UNICODE_STRING@@PAU1@PAUtagCURSORFIND@@@Z @ 0x487F0 (-_FindExistingCursorIcon@@YGPAUtagCURSOR@@GPAU_UNICODE_STRING@@PAU1@PAUtagCURSORFIND@@@Z.c)
 * Callees:
 *     ?ResStrCmp@@YGHPAU_UNICODE_STRING@@0@Z @ 0x48902 (-ResStrCmp@@YGHPAU_UNICODE_STRING@@0@Z.c)
 */

struct tagCURSOR *__userpurge SearchIconCache@<eax>(
        __int16 a1@<dx>,
        int a2@<ecx>,
        struct tagCURSOR *a3,
        int a4,
        struct _UNICODE_STRING *a5,
        struct tagCURSOR *a6,
        struct tagCURSORFIND *a7)
{
  int v7; // esi
  __int16 v8; // ax
  int v10; // eax
  PWSTR Buffer; // ecx
  int v12; // eax
  struct _UNICODE_STRING *v13; // [esp+0h] [ebp-Ch]
  struct _UNICODE_STRING *v14; // [esp+4h] [ebp-8h]

  v7 = a2;
  v8 = a1;
  if ( !a2 )
    return 0;
  while ( 1 )
  {
    if ( a4 && v7 == a4 )
      return (struct tagCURSOR *)a4;
    if ( v8 == *(_WORD *)(v7 + 36) )
      break;
LABEL_8:
    v7 = *(_DWORD *)(v7 + 16);
    if ( !v7 )
      return 0;
  }
  if ( (*(_DWORD *)(v7 + 44) & 0x1004) != 4
    || *(_WORD *)(v7 + 38) != LOWORD(a5->Buffer)
    || !ResStrCmp(v13, v14)
    || (*(_BYTE *)(v7 + 44) & 8) == 0
    && ((v10 = *(_DWORD *)&a5[1].Length) != 0 && *(_DWORD *)(v7 + 88) != v10
     || (Buffer = a5[1].Buffer) != 0 && (PWSTR)(*(_DWORD *)(v7 + 92) >> 1) != Buffer
     || (v12 = *(_DWORD *)&a5[2].Length) != 0 && *(_DWORD *)(v7 + 84) != v12) )
  {
    v8 = a1;
    goto LABEL_8;
  }
  return (struct tagCURSOR *)v7;
}
