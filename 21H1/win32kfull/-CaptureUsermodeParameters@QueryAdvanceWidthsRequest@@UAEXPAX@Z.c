/*
 * XREFs of ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UAEXPAX@Z @ 0x8B216
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z @ 0x8C1D4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall QueryAdvanceWidthsRequest::CaptureUsermodeParameters(QueryAdvanceWidthsRequest *this, _DWORD *a2)
{
  int v4; // ebx
  int v5; // edi
  const void *v6; // ecx
  struct _FONTOBJ *v7; // [esp+0h] [ebp-38h]
  struct _FONTOBJ *v8; // [esp+4h] [ebp-34h]
  int v9; // [esp+1Ch] [ebp-1Ch]
  void *v10; // [esp+40h] [ebp+8h]

  v9 = a2[1];
  v4 = a2[3];
  v10 = (void *)a2[4];
  v5 = a2[6];
  if ( v9 == *((_DWORD *)this + 13)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(v7, v8)
    && v5 != (*((_DWORD *)this + 8) != 1) - 1
    && v4 == *((_DWORD *)this + 14) )
  {
    v6 = (const void *)*((_DWORD *)this + 15);
    if ( v10 == v6 )
    {
      memcpy(*((void **)this + 10), v6, 2 * *((_DWORD *)this + 11));
      *((_DWORD *)this + 12) = v5;
    }
  }
}
