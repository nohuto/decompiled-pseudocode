/*
 * XREFs of ?_GetLaunchArgsSubstring@CortanaSharedExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x180198CB4
 * Callers:
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x180198A38 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaSharedExperienceManager::_GetLaunchArgsSubstring(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        wchar_t **a4,
        unsigned __int64 *a5)
{
  size_t v6; // rdi
  wchar_t *v9; // rax
  wchar_t *v10; // r9
  size_t v11; // rax
  const unsigned __int16 *v12; // rcx
  wchar_t *v13; // rax
  wchar_t *v14; // rdx
  unsigned __int64 v15; // rcx

  v6 = a3;
  v9 = wcsstr(a1, a2);
  *a4 = v9;
  v10 = v9;
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = wcsnlen(a2, v6);
      v10 = *a4;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = &v10[v11];
    *a4 = (wchar_t *)v12;
    if ( v12 <= &a1[v6] )
    {
      v13 = wcsstr(v12, L"&");
      v14 = *a4;
      if ( v13 )
      {
        *a5 = v13 - v14;
      }
      else
      {
        v15 = -1LL;
        do
          ++v15;
        while ( v14[v15] );
        *a5 = v15;
      }
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return 0LL;
}
