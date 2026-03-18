/*
 * XREFs of ?ValidateInjectedTouchFrame@@YGHIPAUtagPOINTER_TOUCH_INFO@@PAUtagINJECTED_CONTACT@@PAUtagRECT@@I@Z @ 0x149543
 * Callers:
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _WPP_RECORDER_SF_D@24 @ 0x147D5C (_WPP_RECORDER_SF_D@24.c)
 *     _WPP_RECORDER_SF_dd@28 @ 0x147DEC (_WPP_RECORDER_SF_dd@28.c)
 *     _WPP_RECORDER_SF_DD@28 @ 0x149D50 (_WPP_RECORDER_SF_DD@28.c)
 */

int __userpurge ValidateInjectedTouchFrame@<eax>(
        unsigned int a1@<edx>,
        unsigned int a2@<ecx>,
        unsigned int a3,
        struct tagPOINTER_TOUCH_INFO *a4,
        struct tagINJECTED_CONTACT *a5,
        struct tagRECT *a6,
        unsigned int a7)
{
  int v7; // ebx
  unsigned int v8; // edi
  int *v9; // esi
  int v10; // ebx
  int v11; // ecx
  unsigned int v12; // eax
  void **v13; // esi
  _DWORD *v14; // ecx
  int *i; // edi
  int v16; // ecx
  char *v17; // eax
  unsigned int v18; // esi
  int v20; // [esp-10h] [ebp-24h]
  char v21; // [esp-8h] [ebp-1Ch]
  int v22; // [esp-4h] [ebp-18h]
  unsigned int v23; // [esp+Ch] [ebp-8h]
  struct tagPOINTER_TOUCH_INFO *v25; // [esp+20h] [ebp+Ch]

  v23 = a1;
  v7 = 0;
  v8 = 0;
  if ( !a2 )
  {
LABEL_6:
    v12 = 0;
    if ( a5 )
    {
      v13 = (void **)(a3 + 8);
      do
      {
        v14 = *v13;
        if ( *v13 != (char *)&loc_3FFFD + 3 && v14 != (_DWORD *)&loc_20000 )
        {
          a1 = 0;
          if ( !a2 )
          {
LABEL_14:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(a1) = 2;
              WPP_RECORDER_SF_q((int)v14, a1, 0x14u, 11, (int)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v12);
            }
            return 0;
          }
          v14 = (_DWORD *)(v23 + 4);
          while ( *v14 != v12 )
          {
            ++a1;
            v14 += 34;
            if ( a1 >= a2 )
              goto LABEL_14;
          }
        }
        ++v12;
        v13 += 3;
      }
      while ( v12 < (unsigned int)a5 );
    }
    if ( !a2 )
      return 1;
    for ( i = (int *)(v23 + 12); ; i += 34 )
    {
      v16 = *i;
      if ( (*i & 0x8000) != 0 && v16 != 294912 && v16 != 163840 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a1) = 2;
          WPP_RECORDER_SF_D(v16, a1, 0x14u, 12, (int)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, *i);
        }
        return 0;
      }
      v25 = (struct tagPOINTER_TOUCH_INFO *)(12 * *(i - 2));
      v17 = *(char **)((char *)v25 + a3 + 8);
      v18 = a2;
      a1 = (v16 & 0xFFFF7FFF) - 65542;
      if ( (v16 & 0xFFFF7FFF) == 0x10006 )
        goto LABEL_38;
      a1 = (v16 & 0xFFFF7FFF) - 0x20000;
      if ( (v16 & 0xFFFF7FFF) != 0x20000 )
        break;
      if ( v17 != (_BYTE *)&loc_20000 + 2 && v17 != (_BYTE *)&loc_40001 + 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(v16, 15, v16, v16, (char)v17);
        return 0;
      }
LABEL_42:
      if ( (v16 & 2) == 0 || (v16 & 0xFFFF7FFF) == 0x40002 )
      {
        a1 = 12 * *(i - 2);
        v11 = i[3];
        if ( v11 != *(_DWORD *)((char *)v25 + a3) || (v18 = a2, i[4] != *(_DWORD *)((char *)v25 + a3 + 4)) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0;
          a1 = v23;
          v22 = *(_DWORD *)(136 * v7 + v23 + 28);
          v21 = i[3];
          v20 = 16;
LABEL_55:
          LOBYTE(a1) = 2;
          WPP_RECORDER_SF_dd(v11, a1, v11, v20, (int)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v21, v22);
          return 0;
        }
      }
      if ( ++v7 >= v18 )
        return 1;
    }
    a1 = (v16 & 0xFFFF7FFF) - 131074;
    if ( (v16 & 0xFFFF7FFF) != 0x20002 )
    {
      a1 = (v16 & 0xFFFF7FFF) - 131078;
      if ( ((v16 & 0xFFFF7FFF) == 0x20006 || (a1 -= (unsigned int)&loc_1FFFA) == 0 || (a1 -= 2) == 0)
        && v17 != (char *)&loc_20006
        && v17 != (char *)65542 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(v16, 14, v16, v16, (char)v17);
        return 0;
      }
      goto LABEL_42;
    }
LABEL_38:
    if ( v17 != (_BYTE *)&loc_20000 + 2
      && v17 != (_BYTE *)&loc_40001 + 1
      && v17 != (char *)&loc_20000
      && v17 != (_BYTE *)&loc_3FFFD + 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(v16, 13, v16, v16, (char)v17);
      return 0;
    }
    goto LABEL_42;
  }
  v9 = (int *)(a1 + 24);
  while ( 1 )
  {
    v10 = v9[1];
    if ( !PtInRect(a4, *v9, v10) )
      break;
    ++v8;
    v9 += 34;
    if ( v8 >= a2 )
    {
      v7 = 0;
      goto LABEL_6;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = v10;
    v21 = a1;
    v20 = 10;
    goto LABEL_55;
  }
  return 0;
}
