/*
 * XREFs of ?GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z @ 0x18034A900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetIsSystemInputApp(
        TouchKeyboardExperienceManager *this,
        const unsigned __int16 *a2,
        int *a3)
{
  int v3; // eax
  char *v5; // rcx
  BOOL v6; // ecx
  __int64 result; // rax

  v3 = *((_DWORD *)this + 92);
  v5 = (char *)this + 352;
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(char **)v5;
  v6 = CompareStringOrdinal((LPCWCH)v5, v3, a2, -1, 1) == 2;
  result = 0LL;
  *a3 = v6;
  return result;
}
