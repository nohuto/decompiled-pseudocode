/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontFileRequest@@UAEXPAX@Z @ 0xE30C2
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall QueryFontFileRequest::CaptureUsermodeParameters(QueryFontFileRequest *this, _DWORD *a2)
{
  const void *v3; // ecx
  signed int v4; // ebx
  void *v5; // eax

  v3 = (const void *)a2[3];
  v4 = a2[4];
  if ( v4 >= 0 && v3 == *((const void **)this + 11) )
  {
    if ( *((_DWORD *)this + 7) != 1 )
    {
      if ( *((_DWORD *)this + 7) != 2 )
        return;
      goto LABEL_5;
    }
    if ( (v4 & 1) == 0 )
    {
      v5 = (void *)*((_DWORD *)this + 9);
      if ( !v5 )
      {
LABEL_5:
        *((_DWORD *)this + 10) = v4;
        return;
      }
      if ( (unsigned int)v4 <= *((_DWORD *)this + 8) )
      {
        if ( v4 > 0 )
        {
          memcpy(v5, v3, v4);
          *(_WORD *)(*((_DWORD *)this + 9) + 2 * ((unsigned int)v4 >> 1) - 2) = 0;
        }
        goto LABEL_5;
      }
    }
  }
}
