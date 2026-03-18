/*
 * XREFs of _CheckImeHotKey@12 @ 0xA2E9A
 * Callers:
 *     _xxxImmProcessKey@20 @ 0xA2CE0 (_xxxImmProcessKey@20.c)
 * Callees:
 *     ?FindImeHotKeyByKey@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@III@Z @ 0xA3098 (-FindImeHotKeyByKey@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@III@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__userpurge CheckImeHotKey@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3@<esi>,
        int a4)
{
  struct _tagIMEHOTKEYOBJ *result; // eax
  char v6; // dl
  int v7; // esi
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v11; // [esp+0h] [ebp-Ch]
  int v12; // [esp+8h] [ebp-4h]

  if ( a4 >= 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    if ( dword_273890 != a1 )
    {
      dword_273890 = 0;
      return 0;
    }
    dword_273890 = 0;
  }
  v6 = *(_BYTE *)(a2 + 192);
  v7 = ((v6 & 1) != 0 ? 0x8004 : 0) | ((v6 & 4) != 0 ? 0x4004 : 0) | ((v6 & 0x10) != 0 ? 0x8002 : 0) | ((v6 & 0x40) != 0 ? 0x4002 : 0) | ((*(_BYTE *)(a2 + 193) & 1) != 0 ? 0x8001 : 0) | ((*(_BYTE *)(a2 + 193) & 4) != 0 ? 0x4001 : 0);
  if ( a1 == 17 || a1 == 18 || a1 == 16 )
  {
    v8 = (v7 & 5) + (((unsigned __int8)(v7 & 7) >> 1) & 5);
    if ( (v8 & 3) + (v8 >> 2) == 1 && (a4 & 0x40000000) == 0 )
      dword_2738B0 = ((v6 & 1) != 0 ? 4 : 0) | ((v6 & 4) != 0 ? 4 : 0) | ((v6 & 0x10) != 0 ? 2 : 0) | ((v6 & 0x40) != 0 ? 2 : 0) | ((*(_BYTE *)(a2 + 193) & 1) != 0 || (*(_BYTE *)(a2 + 193) & 4) != 0);
  }
  else
  {
    dword_2738B0 = 0;
  }
  result = FindImeHotKeyByKey((struct _tagIMEHOTKEYOBJ *)(v7 & 0xC000), a1, a3, v11);
  if ( !result )
    return 0;
  v9 = *((_DWORD *)result + 3);
  if ( v12 )
  {
    if ( ((unsigned __int8)-(&loc_40801 != (_UNKNOWN *)((unsigned int)&loc_40801 & v9)) & (((unsigned int)&loc_20802 & v9) != (_DWORD)&loc_20802
                                                                                        && (v9 & 0x10804) != 67588)) != 0 )
    {
      if ( (v9 & 0x800) != 0 )
        goto LABEL_21;
    }
    else if ( dword_2738B0 == (*((_DWORD *)result + 3) & 7) )
    {
LABEL_21:
      dword_2738B0 = 0;
      return result;
    }
    return 0;
  }
  if ( (v9 & 0x800) != 0 )
  {
    dword_273890 = a1;
    return 0;
  }
  return result;
}
