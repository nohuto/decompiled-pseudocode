/*
 * XREFs of ?AsyncWindowPos@@YGXPAUtagSMWP@@@Z @ 0xA4AAA
 * Callers:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __thiscall AsyncWindowPos(_DWORD *this)
{
  int v1; // edx
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  int v4; // edi
  int v5; // ebx
  _DWORD *i; // ecx
  int v7; // eax
  struct tagWND *v8; // edi
  _DWORD *v9; // ecx
  _DWORD *v10; // edx
  int v11; // eax
  int v12; // [esp+0h] [ebp-28h]
  struct tagINPUT_MESSAGE_SOURCE *v13; // [esp+4h] [ebp-24h]
  _DWORD *v14; // [esp+14h] [ebp-14h]
  char *v15; // [esp+18h] [ebp-10h]
  unsigned int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+24h] [ebp-4h]

  v1 = this[4];
  v2 = (_DWORD *)this[6];
  v3 = (_DWORD *)(_gptiCurrent + 236);
  v14 = v2;
  v17 = v1;
  while ( v1 )
  {
    while ( 1 )
    {
      if ( *v2 )
      {
        v16 = v2[21];
        v4 = *(_DWORD *)(v16 + 236);
        if ( v4 != *v3 )
          break;
      }
      v2 += 32;
      --v1;
      v14 = v2;
      v17 = v1;
      if ( !v1 )
        return;
    }
    v5 = 0;
    for ( i = v2; --v1 >= 0; i += 32 )
    {
      if ( *i && *(_DWORD *)(i[21] + 236) == v4 )
        ++v5;
    }
    v7 = Win32AllocPool((v5 << 7) + 28, 2004054869);
    v8 = (struct tagWND *)v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 16) = v5;
      v15 = (char *)(v7 + 28);
      v10 = v2;
      *(_DWORD *)(v7 + 24) = v7 + 28;
      if ( v5 )
      {
        do
        {
          if ( *v10 && *(_DWORD *)(v10[21] + 236) == *(_DWORD *)(v16 + 236) )
          {
            qmemcpy(v15, v10, 0x80u);
            --v5;
            v15 += 128;
            *v10 = 0;
          }
          v10 += 32;
        }
        while ( v5 );
        v2 = v14;
        v8 = (struct tagWND *)v7;
      }
      v11 = PostEventMessageEx((struct tagTHREADINFO *)3, 0, 0, v8, v16, 0, v12, v13);
      v1 = v17;
      v3 = (_DWORD *)(_gptiCurrent + 236);
      if ( !v11 )
      {
        Win32FreePool(v8);
        goto LABEL_19;
      }
    }
    else
    {
      v1 = v17;
      v9 = v2;
      if ( !v5 )
        goto LABEL_2;
      do
      {
        if ( *(_DWORD *)(v9[21] + 236) == *(_DWORD *)(v16 + 236) )
        {
          *v9 = 0;
          --v5;
        }
        v9 += 32;
      }
      while ( v5 );
LABEL_19:
      v1 = v17;
LABEL_2:
      v3 = (_DWORD *)(_gptiCurrent + 236);
    }
  }
}
