/*
 * XREFs of sub_1C0002D20 @ 0x1C0002D20
 * Callers:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 * Callees:
 *     sub_1C0003300 @ 0x1C0003300 (sub_1C0003300.c)
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0030FF8 @ 0x1C0030FF8 (sub_1C0030FF8.c)
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 */

__int64 __fastcall sub_1C0002D20(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  _DWORD *v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  unsigned __int16 i; // di
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rcx

  v3 = a3;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    goto LABEL_48;
  if ( *v6 != 541218120 )
    sub_1C002DC78(a1, v6);
  sub_1C000F050(*(_QWORD *)(a2 + 8));
  v7 = *(_DWORD *)(a2 + 80);
  if ( (dword_1C006B268 & 0x800) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1397781346;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a2;
      *(_QWORD *)(v9 + 24) = v3;
    }
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 14, (__int64)&unk_1C0062C48, v3);
  if ( (_DWORD)v3 == 8 )
  {
    v7 = 3;
  }
  else
  {
    v10 = v3 - 3;
    if ( v10 )
    {
      v11 = v10 - 4;
      if ( v11 )
      {
        v12 = v11 - 3;
        if ( !v12 )
        {
          sub_1C000F050(a1);
          sub_1C000FD80(a1, 2048, 1919251262, 0, 0LL);
          for ( i = 1; ; ++i )
          {
            v14 = *(_QWORD *)(a1 + 64);
            if ( !v14 )
              break;
            if ( *(_DWORD *)v14 != 541218120 )
              sub_1C002DC78(a1, v14);
            if ( i > *(unsigned __int8 *)(v14 + 2938) )
              goto LABEL_37;
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
              sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 63, (__int64)&unk_1C0062098, i);
            if ( (dword_1C006B268 & 0x200) != 0 )
            {
              v15 = *(_QWORD *)(a1 + 64);
              if ( v15 )
              {
                v16 = *(_QWORD *)(v15 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
                *(_DWORD *)v16 = 959464784;
                *(_QWORD *)(v16 + 24) = i;
                *(_QWORD *)(v16 + 8) = 0LL;
                *(_QWORD *)(v16 + 16) = 0LL;
              }
            }
            if ( (dword_1C006B268 & 8) != 0 )
            {
              v17 = *(_QWORD *)(a1 + 64);
              if ( v17 )
              {
                v18 = *(_QWORD *)(v17 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
                *(_DWORD *)v18 = 1413771367;
                *(_QWORD *)(v18 + 16) = i;
                *(_QWORD *)(v18 + 8) = 0LL;
                *(_QWORD *)(v18 + 24) = 0LL;
              }
            }
            if ( i )
            {
              v19 = *(_QWORD *)(a1 + 64);
              if ( !v19 )
                break;
              if ( *(_DWORD *)v19 != 541218120 )
                sub_1C002DC78(a1, v19);
              if ( i <= *(unsigned __int8 *)(v19 + 2938) )
              {
                v20 = *(_QWORD *)(v19 + 3056);
                if ( v20 )
                {
                  v21 = 2928LL * i + v20 - 2928;
                  if ( (dword_1C006B268 & 8) != 0 )
                  {
                    v22 = *(_QWORD *)(v19 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
                    *(_DWORD *)v22 = 1044672615;
                    *(_QWORD *)(v22 + 8) = 0LL;
                    *(_QWORD *)(v22 + 16) = i;
                    *(_QWORD *)(v22 + 24) = v21;
                  }
                  if ( v21 )
                    sub_1C0007840(a1, v21, 9, a2, 0LL, 0, 0LL, 0LL);
                }
              }
            }
          }
LABEL_48:
          sub_1C002DC78(a1, 0LL);
        }
        if ( v12 == 1 )
        {
          sub_1C0030FF8(a1, a2);
LABEL_37:
          v7 = 5;
        }
      }
      else
      {
        v7 = 4;
      }
    }
    else
    {
      sub_1C0031080(a1, a2);
      v7 = 2;
    }
  }
  return sub_1C0003300(a1, a2, v7);
}
