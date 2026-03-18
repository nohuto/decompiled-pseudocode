/*
 * XREFs of ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UAEXPAX@Z @ 0x8C538
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall QueryTrueTypeTableRequest::CaptureUsermodeParameters(QueryTrueTypeTableRequest *this, _DWORD *a2)
{
  const void *v4; // ebx
  _DWORD *v5; // edx
  signed int v6; // edi
  _DWORD *v8; // ecx
  void *v10; // eax
  _DWORD *v11; // [esp+10h] [ebp-2Ch]
  _DWORD *v12; // [esp+44h] [ebp+8h]

  v4 = (const void *)a2[5];
  v5 = (_DWORD *)a2[6];
  v12 = (_DWORD *)a2[7];
  v6 = a2[8];
  if ( v6 >= 0
    && ((unsigned int)v6 <= *((_DWORD *)this + 10) || !*((_DWORD *)this + 11))
    && v4 == *((const void **)this + 15) )
  {
    v11 = (_DWORD *)*((_DWORD *)this + 12);
    if ( v11 ? v5 == *((_DWORD **)this + 16) : v5 == 0 )
    {
      v8 = (_DWORD *)*((_DWORD *)this + 13);
      if ( v8 ? v12 == *((_DWORD **)this + 17) : v12 == 0 )
      {
        v10 = (void *)*((_DWORD *)this + 11);
        if ( v10 )
        {
          memcpy(v10, v4, v6);
        }
        else
        {
          if ( v11 )
          {
            *v11 = *v5;
            v8 = (_DWORD *)*((_DWORD *)this + 13);
          }
          if ( v8 )
            *v8 = *v12;
        }
        *((_DWORD *)this + 14) = v6;
      }
    }
  }
}
