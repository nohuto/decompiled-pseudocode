/*
 * XREFs of ?SortTouchContacts@@YGHPAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1493C6
 * Callers:
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 */

int __fastcall SortTouchContacts(int a1, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // edi
  unsigned int v4; // ebx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // esi
  _DWORD *v8; // edx
  char *v9; // eax
  const void *v10; // esi
  void *v11; // edi
  unsigned int *i; // eax
  int v14; // [esp-Ch] [ebp-C4h]
  unsigned int v15; // [esp-4h] [ebp-BCh]
  _DWORD v16[34]; // [esp+10h] [ebp-A8h] BYREF
  unsigned int v17; // [esp+98h] [ebp-20h]
  int v18; // [esp+9Ch] [ebp-1Ch]
  unsigned int v19; // [esp+A0h] [ebp-18h]
  int v20; // [esp+A4h] [ebp-14h]
  int v21; // [esp+A8h] [ebp-10h]
  _DWORD *v22; // [esp+ACh] [ebp-Ch]
  int v23; // [esp+B0h] [ebp-8h]
  char *v24; // [esp+B4h] [ebp-4h]

  v2 = a2;
  v17 = a2;
  v3 = a1;
  v21 = a1;
  if ( a2 )
  {
    v4 = 1;
    if ( a2 / 9 <= 1 )
      goto LABEL_7;
    do
      v4 = 3 * v4 + 1;
    while ( v4 < a2 / 9 );
    while ( v4 )
    {
LABEL_7:
      v5 = v4;
      v19 = v4;
      if ( v4 < v2 )
      {
        v23 = 0;
        v6 = v21;
        v22 = (_DWORD *)v3;
        v18 = 136 * v4;
        v24 = (char *)(v3 + 136 * v4);
        do
        {
          qmemcpy(v16, v24, sizeof(v16));
          v7 = v23;
          v20 = v23;
          if ( v23 >= 0 )
          {
            v8 = v22;
            v9 = v24;
            do
            {
              if ( v8[1] <= v16[1] )
                break;
              v10 = v8;
              v11 = v9;
              v8 = (_DWORD *)((char *)v8 - v18);
              v9 -= v18;
              qmemcpy(v11, v10, 0x88u);
              v7 = v20 - v4;
              v20 = v7;
            }
            while ( v7 >= 0 );
            v5 = v19;
            v6 = v21;
          }
          if ( v5 != v7 + v4 )
            qmemcpy((void *)(v6 + 136 * (v7 + v4)), v16, 0x88u);
          v2 = v17;
          v24 += 136;
          ++v5;
          ++v23;
          v22 += 34;
          v19 = v5;
        }
        while ( v5 < v17 );
        v3 = v21;
      }
      v4 /= 3u;
    }
    a1 = 1;
    if ( v2 <= 1 )
      return 1;
    for ( i = (unsigned int *)(v3 + 140); ; i += 34 )
    {
      a2 = *i;
      if ( *i == *(i - 34) )
        break;
      if ( ++a1 >= v2 )
        return 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *i;
      v14 = 18;
      goto LABEL_27;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 0;
    v14 = 17;
LABEL_27:
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_q(a1, a2, 0x14u, v14, (int)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v15);
  }
  return 0;
}
