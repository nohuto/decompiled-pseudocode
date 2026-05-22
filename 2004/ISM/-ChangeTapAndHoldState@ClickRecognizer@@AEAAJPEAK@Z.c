/*
 * XREFs of ?ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z @ 0x180184188
 * Callers:
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x180184448 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClickRecognizer::ChangeTapAndHoldState(ClickRecognizer *this, unsigned int *a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  __int64 v8; // rax
  int v9; // edx
  int v10; // edx

  v3 = (int)(*((_DWORD *)this + 5) << 28) >> 28;
  if ( v3 && v3 != 5 )
  {
    if ( v3 != 1
      || (*((_DWORD *)this + 5) = *((_DWORD *)this + 5) & 0xFFFFFFF0 | 2,
          *((_WORD *)this + 8) |= 0x40u,
          v4 = *((unsigned __int16 *)this + 15),
          *((_QWORD *)this + 12) = *((_QWORD *)this + 14),
          v5 = v4 - *((unsigned __int16 *)this + 14),
          v5 <= 0) )
    {
      v6 = *((_DWORD *)this + 5);
      v7 = v6 << 28 >> 28;
      if ( v7 == 2 )
      {
        *((_DWORD *)this + 5) = v6 & 0xFFFFFFF0 | 3;
        *((_WORD *)this + 8) |= 0x10u;
        v8 = *((_QWORD *)this + 14);
        *((_DWORD *)this + 19) = 0;
        *(_QWORD *)((char *)this + 68) = v8;
        *a2 = *((unsigned __int16 *)this + 16);
        return 0LL;
      }
      if ( v7 != 3
        || (*((_DWORD *)this + 5) = v6 & 0xFFFFFFF0 | 4,
            *((_WORD *)this + 8) |= 0x20u,
            v9 = *((unsigned __int16 *)this + 17),
            *(_QWORD *)((char *)this + 84) = *((_QWORD *)this + 14),
            v10 = v9 - *((unsigned __int16 *)this + 16),
            *((_DWORD *)this + 23) = 1,
            v5 = v10 - *((unsigned __int16 *)this + 15),
            v5 <= 0) )
      {
        if ( (*((_DWORD *)this + 5) & 0xF) == 4 )
        {
          *((_DWORD *)this + 5) = *((_DWORD *)this + 5) & 0xFFFFFFF0 | 5;
          *((_WORD *)this + 8) |= 0x100u;
          *((_QWORD *)this + 13) = *((_QWORD *)this + 14);
        }
        return 0LL;
      }
    }
    *a2 = v5;
    return 0LL;
  }
  return 2147942487LL;
}
