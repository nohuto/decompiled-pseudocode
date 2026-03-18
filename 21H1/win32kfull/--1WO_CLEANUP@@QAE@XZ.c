/*
 * XREFs of ??1WO_CLEANUP@@QAE@XZ @ 0x1E6460
 * Callers:
 *     _EngCreateWnd@20 @ 0x1E6AA4 (_EngCreateWnd@20.c)
 * Callees:
 *     <none>
 */

void __thiscall WO_CLEANUP::~WO_CLEANUP(WO_CLEANUP *this)
{
  _DWORD *v2; // eax
  int v3; // eax
  int v4; // eax
  REGION *v5; // ecx
  REGION *v6; // ecx
  REGION *v7; // ecx

  if ( !*(_DWORD *)this )
  {
    v2 = (_DWORD *)*((_DWORD *)this + 1);
    if ( v2 )
    {
      *v2 = 0;
      Win32FreePool(*((PATHOBJ **)this + 1));
    }
    v3 = *((_DWORD *)this + 2);
    if ( v3 )
    {
      *(_DWORD *)(v3 + 124) = 0;
      Win32FreePool(*((PATHOBJ **)this + 2));
    }
    v4 = *((_DWORD *)this + 3);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 124) = 0;
      Win32FreePool(*((PATHOBJ **)this + 3));
    }
    v5 = (REGION *)*((_DWORD *)this + 4);
    if ( v5 )
      REGION::vDeleteREGION(v5);
    v6 = (REGION *)*((_DWORD *)this + 5);
    if ( v6 )
      REGION::vDeleteREGION(v6);
    v7 = (REGION *)*((_DWORD *)this + 6);
    if ( v7 )
      REGION::vDeleteREGION(v7);
    if ( *((_DWORD *)this + 7) )
      GreDeleteSemaphore(*((_DWORD *)this + 7));
  }
}
