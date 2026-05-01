/*
 * XREFs of ?IsPreReleaseExperience@ExperienceManagerUtils@@YA_NXZ @ 0x180452DF8
 * Callers:
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804505E8 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ExperienceManagerUtils::IsPreReleaseExperience(ExperienceManagerUtils *this)
{
  int v1; // eax
  char v2; // bl
  LSTATUS ValueW; // eax
  bool v4; // zf
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF

  v1 = dword_1805A22BC;
  v2 = 1;
  if ( !dword_1805A22BC )
  {
    v7 = 0;
    v8 = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
               L"PrereleaseExperience",
               0x10000012u,
               &v7,
               &v6,
               &v8);
    if ( !ValueW )
    {
      if ( v7 == 4 )
      {
        if ( v6 <= 1 )
        {
          v4 = v6 == 1;
          goto LABEL_9;
        }
      }
      else if ( v8 == 4 && (unsigned __int16)(v6 - 48) <= 1u )
      {
        ValueW = 0;
        v4 = (_WORD)v6 == 49;
LABEL_9:
        LOBYTE(ValueW) = v4;
        if ( ValueW )
        {
          dword_1805A22BC = 1;
          return v2;
        }
      }
    }
    v1 = 2;
    dword_1805A22BC = 2;
  }
  if ( v1 != 1 )
    return 0;
  return v2;
}
