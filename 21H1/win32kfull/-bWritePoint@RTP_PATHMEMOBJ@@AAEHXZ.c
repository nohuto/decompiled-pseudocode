/*
 * XREFs of ?bWritePoint@RTP_PATHMEMOBJ@@AAEHXZ @ 0x2284B8
 * Callers:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AAEHXZ @ 0x2281CA (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AAEHXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall RTP_PATHMEMOBJ::bWritePoint(RTP_PATHMEMOBJ *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v7; // [esp+8h] [ebp-4h]

  v2 = 1;
  v3 = *((_DWORD *)this + 24);
  v4 = *((_DWORD *)this + 31);
  if ( v3 == 2 )
  {
    v5 = *((_DWORD *)this + 2 * v4 + 36) - *((_DWORD *)this + 28);
    v7 = *((_DWORD *)this + 2 * v4 + 35) - *((_DWORD *)this + 27);
    if ( v7 != *((_DWORD *)this + 29) || v5 != *((_DWORD *)this + 30) )
    {
      v2 = EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 23), 0, (struct _POINTL *)((char *)this + 100), 1u);
      if ( v2 )
      {
        *((_DWORD *)this + 25) = *((_DWORD *)this + 27);
        *((_DWORD *)this + 26) = *((_DWORD *)this + 28);
        *((_DWORD *)this + 29) = v7;
        *((_DWORD *)this + 30) = v5;
      }
    }
    *((_DWORD *)this + 27) = *((_DWORD *)this + 2 * v4 + 35);
    *((_DWORD *)this + 28) = *((_DWORD *)this + 2 * v4 + 36);
  }
  else
  {
    if ( v3 )
    {
      if ( v3 != 1 )
        return 0;
      *((_DWORD *)this + 27) = *((_DWORD *)this + 2 * v4 + 35);
      *((_DWORD *)this + 28) = *((_DWORD *)this + 2 * v4 + 36);
      *((_DWORD *)this + 29) = *((_DWORD *)this + 27) - *((_DWORD *)this + 25);
      *((_DWORD *)this + 30) = *((_DWORD *)this + 28) - *((_DWORD *)this + 26);
    }
    else
    {
      *((_DWORD *)this + 25) = *((_DWORD *)this + 2 * v4 + 35);
      *((_DWORD *)this + 26) = *((_DWORD *)this + 2 * v4 + 36);
    }
    ++*((_DWORD *)this + 24);
  }
  return v2;
}
