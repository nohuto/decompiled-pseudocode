/*
 * XREFs of _EditionParseDesktop@40 @ 0xF19B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     ?xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z @ 0xA9B34 (-xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z.c)
 */

int __userpurge EditionParseDesktop@<eax>(
        unsigned int a1@<esi>,
        int a2,
        int a3,
        int a4,
        struct tagWINDOWSTATION *a5,
        char a6,
        int a7,
        struct _ACCESS_STATE *String1,
        _DWORD *a9,
        int a10,
        struct _UNICODE_STRING *a11)
{
  _DWORD *v11; // ebx
  int DesktopEx2; // edi
  int v14; // eax
  _DWORD *v15; // esi
  const UNICODE_STRING *v16; // ecx
  void **v18; // [esp+0h] [ebp-8h]

  v11 = a9;
  *(_DWORD *)&a11->Length = 0;
  DesktopEx2 = -1073741772;
  if ( v11 && *v11 != _gSessionId )
    return -1073741811;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&a9);
  v14 = a2;
  v15 = *(_DWORD **)(a2 + 8);
  if ( !v15 )
  {
LABEL_12:
    if ( v11 )
      DesktopEx2 = xxxCreateDesktopEx2(a4, v14, a5, String1, v11[1], a11, a1, v18);
    goto LABEL_14;
  }
  while ( 1 )
  {
    v16 = ObQueryNameInfo(v15) ? (const UNICODE_STRING *)(ObQueryNameInfo(v15) + 4) : 0;
    if ( v16 && RtlEqualUnicodeString((PCUNICODE_STRING)String1, v16, (a6 & 0x40) != 0) )
      break;
    v15 = (_DWORD *)v15[4];
    if ( !v15 )
    {
      v14 = a2;
      goto LABEL_12;
    }
  }
  if ( !v11 )
  {
    DesktopEx2 = 0;
    goto LABEL_22;
  }
  if ( a6 < 0 )
  {
    DesktopEx2 = 0x40000000;
LABEL_22:
    ObfReferenceObject(v15);
    *(_DWORD *)&a11->Length = v15;
    goto LABEL_14;
  }
  DesktopEx2 = -1073741771;
LABEL_14:
  if ( !a9 )
    UserSessionSwitchLeaveCrit();
  return DesktopEx2;
}
