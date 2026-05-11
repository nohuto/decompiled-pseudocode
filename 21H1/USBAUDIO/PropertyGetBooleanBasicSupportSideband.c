/*
 * XREFs of PropertyGetBooleanBasicSupportSideband @ 0x1C0028B4C
 * Callers:
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C920 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetBooleanBasicSupportSideband(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // r10
  int v4; // r9d
  unsigned int v5; // r11d
  unsigned int v6; // ecx
  __int64 result; // rax
  _DWORD *v8; // r8
  __int64 v9; // rcx

  v3 = *(unsigned int *)(a1 + 92);
  v4 = 4;
  v5 = *a2;
  v6 = 16 * *(_DWORD *)(a1 + 92) + 56;
  if ( (unsigned int)*a2 >= 4 )
  {
    result = 0LL;
    *(_DWORD *)a3 = 515;
    if ( v5 >= 0x28 )
    {
      *(_DWORD *)(a3 + 4) = v6;
      v4 = 40;
      *(_QWORD *)(a3 + 24) = 11LL;
      *(_QWORD *)(a3 + 32) = 1LL;
      *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
      if ( v5 >= v6 )
      {
        *(_DWORD *)(a3 + 44) = 16;
        *(_DWORD *)(a3 + 40) = 2;
        *(_DWORD *)(a3 + 52) = 2;
        v4 = v6;
        *(_DWORD *)(a3 + 48) = v3;
        if ( (_DWORD)v3 )
        {
          v8 = (_DWORD *)(a3 + 68);
          v9 = v3;
          do
          {
            *(v8 - 3) = 1;
            *(v8 - 1) = 0;
            *v8 = 1;
            v8 += 4;
            --v9;
          }
          while ( v9 );
        }
      }
    }
  }
  else
  {
    v4 = v6;
    result = 3221225507LL;
  }
  *a2 = v4;
  return result;
}
