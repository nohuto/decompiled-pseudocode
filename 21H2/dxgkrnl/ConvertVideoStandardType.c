/*
 * XREFs of ConvertVideoStandardType @ 0x1C018CBF4
 * Callers:
 *     ConvertVideoSignalInfo @ 0x1C018CB24 (ConvertVideoSignalInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertVideoStandardType(int a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = a1;
  if ( a1 > 14 )
  {
    if ( a1 > 21 )
    {
      switch ( a1 )
      {
        case 22:
          *a2 = 22;
          return 0LL;
        case 23:
          *a2 = 23;
          return 0LL;
        case 24:
          *a2 = 24;
          return 0LL;
        case 25:
          *a2 = 25;
          return 0LL;
      }
      v5 = (unsigned int)(a1 - 26);
      if ( (_DWORD)v2 == 26 )
      {
        *a2 = 26;
        return 0LL;
      }
      if ( (_DWORD)v2 == 27 )
      {
        *a2 = 27;
        return 0LL;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 21:
          *a2 = 21;
          return 0LL;
        case 15:
          *a2 = 15;
          return 0LL;
        case 16:
          *a2 = 16;
          return 0LL;
        case 17:
          *a2 = 17;
          return 0LL;
        case 18:
          *a2 = 18;
          return 0LL;
      }
      v5 = (unsigned int)(a1 - 19);
      if ( (_DWORD)v2 == 19 )
      {
        *a2 = 19;
        return 0LL;
      }
      if ( (_DWORD)v2 == 20 )
      {
        *a2 = 20;
        return 0LL;
      }
    }
  }
  else
  {
    if ( a1 == 14 )
    {
      *a2 = 14;
      return 0LL;
    }
    if ( a1 > 7 )
    {
      switch ( a1 )
      {
        case 8:
          *a2 = 8;
          return 0LL;
        case 9:
          *a2 = 9;
          return 0LL;
        case 10:
          *a2 = 10;
          return 0LL;
        case 11:
          *a2 = 11;
          return 0LL;
      }
      v5 = (unsigned int)(a1 - 12);
      if ( (_DWORD)v2 == 12 )
      {
        *a2 = 12;
        return 0LL;
      }
      if ( (_DWORD)v2 == 13 )
      {
        *a2 = 13;
        return 0LL;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 7:
          *a2 = 7;
          return 0LL;
        case 0:
          *a2 = 255;
          return 0LL;
        case 1:
          *a2 = 1;
          return 0LL;
        case 2:
          *a2 = 2;
          return 0LL;
        case 3:
          *a2 = 3;
          return 0LL;
        case 4:
          *a2 = 4;
          return 0LL;
      }
      v5 = (unsigned int)(a1 - 5);
      if ( (_DWORD)v2 == 5 )
      {
        *a2 = 5;
        return 0LL;
      }
      if ( (_DWORD)v2 == 6 )
      {
        *a2 = 6;
        return 0LL;
      }
    }
  }
  v6 = WdLogNewEntry5_WdError(v5, a2);
  *(_QWORD *)(v6 + 24) = v2;
  WdLogEvent5_WdError(v6);
  *a2 = 0;
  return 3223192354LL;
}
