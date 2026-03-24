/*
 * XREFs of ?Contains@CRgnData@Internal@FastRegion@@QEBA_NAEBUtagRECT@@@Z @ 0x1800C76D0
 * Callers:
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x1800C75F4 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CRgnData::Contains(
        FastRegion::Internal::CRgnData *this,
        const struct tagRECT *a2)
{
  LONG left; // edi
  LONG right; // r10d
  LONG top; // ebx
  LONG bottom; // r8d
  LONG *i; // rcx
  LONG v7; // r11d
  LONG v8; // edx
  LONG *j; // r9
  LONG v11; // esi

  left = a2->left;
  if ( a2->left >= *((_DWORD *)this + 1) )
  {
    right = a2->right;
    if ( right <= *((_DWORD *)this + 2) )
    {
      top = a2->top;
      if ( top >= *((_DWORD *)this + 3) )
      {
        bottom = a2->bottom;
        if ( bottom <= *((_DWORD *)this + 2 * *(int *)this + 1) )
        {
          if ( bottom <= *((_DWORD *)this + 3) )
            return 1;
          for ( i = (LONG *)((char *)this + 20); ; i += 2 )
          {
            v7 = *i;
            if ( top < *i )
            {
              v8 = left;
              for ( j = (LONG *)((char *)i + *(i - 1) - 8); j < (LONG *)((char *)i + i[1]); j += 2 )
              {
                v11 = v8;
                if ( *j > v8 )
                  break;
                v8 = j[1];
                if ( v8 <= v11 )
                  v8 = v11;
              }
              if ( v8 < right )
                break;
            }
            if ( bottom <= v7 )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
