/*
 * XREFs of sub_180063074 @ 0x180063074
 * Callers:
 *     sub_180062DCC @ 0x180062DCC (sub_180062DCC.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 */

void *__fastcall sub_180063074(PACL pAcl, PACL a2)
{
  unsigned int v4; // ebx
  void *result; // rax
  void *v6; // r14
  DWORD v7; // ebp
  DWORD v8; // edi
  DWORD v9; // edi
  LPVOID pAce; // [rsp+58h] [rbp+10h] BYREF
  LPVOID Buf1; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  result = HeapAlloc(hHeap, 0, 4LL * a2->AceCount);
  v6 = result;
  if ( result )
  {
    memset(result, 0, 4LL * a2->AceCount);
    v7 = 0;
    if ( pAcl->AceCount )
    {
LABEL_3:
      v4 = 0;
      if ( !GetAce(pAcl, v7, &pAce) )
      {
LABEL_13:
        HeapFree(hHeap, 0, v6);
        return (void *)v4;
      }
      v8 = 0;
      if ( a2->AceCount )
      {
        while ( GetAce(a2, v8, &Buf1) )
        {
          if ( *((_WORD *)Buf1 + 1) == *((_WORD *)pAce + 1) && !memcmp(Buf1, pAce, *((unsigned __int16 *)pAce + 1)) )
          {
            v4 = 1;
            ++v7;
            *((_DWORD *)v6 + v8) = 1;
            if ( v7 < pAcl->AceCount )
              goto LABEL_3;
            goto LABEL_9;
          }
          if ( ++v8 >= a2->AceCount )
            goto LABEL_9;
        }
        goto LABEL_13;
      }
    }
LABEL_9:
    if ( v4 )
    {
      v9 = 0;
      if ( a2->AceCount )
      {
        while ( *((_DWORD *)v6 + v9) || GetAce(a2, v9, &pAce) && (*((_BYTE *)pAce + 1) & 0x10) != 0 )
        {
          if ( ++v9 >= a2->AceCount )
            goto LABEL_13;
        }
        v4 = 0;
      }
    }
    goto LABEL_13;
  }
  return result;
}
