/*
 * XREFs of _GreLockDisplayArea@8 @ 0x1230A
 * Callers:
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int (__stdcall *__fastcall GreLockDisplayArea(_DWORD *a1, struct _RECTL *a2))(_DWORD, struct _RECTL *)
{
  struct _RECTL *v2; // edi
  ERECTL *v4; // ecx
  int (__stdcall *result)(_DWORD, struct _RECTL *); // eax
  unsigned int v6; // esi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // ecx
  int v10; // edx
  int (__stdcall *v11)(_DWORD, struct _RECTL *); // esi
  unsigned int v12; // [esp+10h] [ebp-40h]
  int v14; // [esp+18h] [ebp-38h]
  struct _RECTL v15; // [esp+1Ch] [ebp-34h] BYREF
  struct _RECTL v16; // [esp+2Ch] [ebp-24h] BYREF
  struct _RECTL v17; // [esp+3Ch] [ebp-14h] BYREF

  v2 = a2;
  v16 = *a2;
  ERECTL::vOrder((ERECTL *)&v16);
  result = (int (__stdcall *)(_DWORD, struct _RECTL *))ERECTL::bWrapped(v4);
  if ( !result )
  {
    v6 = 0;
    v12 = 0;
    if ( a1[26] )
    {
      v14 = 0;
      result = (int (__stdcall *)(_DWORD, struct _RECTL *))GreIsSemaphoreOwnedByCurrentThread(_ghsemSprite);
      if ( !result )
      {
        GreAcquireSemaphore(_ghsemSprite);
        result = (int (__stdcall *)(_DWORD, struct _RECTL *))EtwTraceGreLockAcquireSemaphoreExclusive(
                                                               L"ghsemSprite",
                                                               _ghsemSprite,
                                                               5);
        v14 = 1;
      }
      if ( a1[26] )
      {
        do
        {
          v7 = *(_DWORD *)(a1[27] + 4 * v6);
          v15 = v16;
          v8 = (_DWORD *)v7;
          v9 = *(_DWORD *)(v7 + 1836);
          v10 = *(_DWORD *)(v7 + 1840);
          v15.right = v16.right - v9;
          v15.top = v16.top - v10;
          v15.bottom = v16.bottom - v10;
          v15.left = v16.left - v9;
          result = (int (__stdcall *)(_DWORD, struct _RECTL *))bIntersect(&v15, (const struct _RECTL *)(v7 + 84), &v17);
          if ( result )
          {
            if ( v14 )
            {
              GreAcquireSemaphore(v8[38]);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", v8[38], 8);
            }
            result = (int (__stdcall *)(_DWORD, struct _RECTL *))v8[576];
            if ( result )
              result = (int (__stdcall *)(_DWORD, struct _RECTL *))result(v8[277], &v17);
          }
          v6 = v12 + 1;
          v12 = v6;
        }
        while ( v6 < a1[26] );
      }
    }
    else
    {
      v11 = (int (__stdcall *)(_DWORD, struct _RECTL *))a1[576];
      result = (int (__stdcall *)(_DWORD, struct _RECTL *))GreIsSemaphoreOwnedByCurrentThread(_ghsemSprite);
      if ( !result )
      {
        GreAcquireSemaphore(_ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", _ghsemSprite, 5);
        GreAcquireSemaphore(a1[38]);
        result = (int (__stdcall *)(_DWORD, struct _RECTL *))EtwTraceGreLockAcquireSemaphoreExclusive(
                                                               L"hsem",
                                                               a1[38],
                                                               8);
        v2 = a2;
      }
      if ( v11 )
        return (int (__stdcall *)(_DWORD, struct _RECTL *))v11(a1[277], v2);
    }
  }
  return result;
}
