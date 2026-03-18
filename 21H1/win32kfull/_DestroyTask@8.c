/*
 * XREFs of _DestroyTask@8 @ 0x1558C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 */

void __stdcall DestroyTask(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  _DWORD *v9; // ebx
  struct _KEVENT *v10; // ecx
  _DWORD *v11; // edx
  _DWORD *i; // eax
  _DWORD *v13; // eax
  _BYTE v14[8]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 200);
  v4 = *(_DWORD *)(a2 + 332);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  if ( !v4 )
    goto LABEL_23;
  if ( (*(_BYTE *)(v4 + 22) & 1) != 0 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a2 + 252) + 84);
    if ( v5 )
      _PostMessage(v5, 1114, 0, 0);
  }
  v6 = *(_DWORD **)(v4 + 16);
  if ( v6 )
  {
    v7 = (_DWORD *)_gpwtiFirst;
    v8 = (_DWORD *)_gpwtiFirst;
    if ( (_DWORD *)_gpwtiFirst != v6 )
    {
      do
      {
        v9 = (_DWORD *)*v8;
        if ( !*v8 )
          break;
        v7 = v8;
        v8 = (_DWORD *)*v8;
      }
      while ( v9 != v6 );
      v2 = a2;
    }
    if ( (_DWORD *)*v7 == v6 )
    {
      *v7 = *v6;
      v6 = *(_DWORD **)(v4 + 16);
    }
    v10 = (struct _KEVENT *)v6[4];
    if ( v10 != (struct _KEVENT *)-1 )
    {
      if ( !v10 )
      {
LABEL_16:
        Win32FreePool(*(_DWORD *)(v4 + 16));
        goto LABEL_17;
      }
      KeSetEvent(v10, 1, 0);
      ObfDereferenceObject(*(PVOID *)(*(_DWORD *)(v4 + 16) + 16));
      v6 = *(_DWORD **)(v4 + 16);
    }
    v6[4] = 0;
    goto LABEL_16;
  }
LABEL_17:
  v11 = (_DWORD *)(v3 + 8);
  *(_DWORD *)(_gpsi + 4440) -= *(_DWORD *)(v4 + 4);
  for ( i = *(_DWORD **)(v3 + 8); i; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)v4 )
    {
      *v11 = *i;
      Win32FreePool(v4);
      *(_DWORD *)(v2 + 332) = 0;
      break;
    }
    v11 = i;
  }
LABEL_23:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  if ( *(_DWORD *)(v3 + 4) == v2 )
  {
    *(_DWORD *)(v3 + 4) = 0;
    if ( v2 == *(_DWORD *)(v3 + 32) )
    {
      *(_DWORD *)(v3 + 32) = 0;
      --*(_DWORD *)(v3 + 36);
    }
    v13 = *(_DWORD **)(v3 + 8);
    if ( v13 )
    {
      while ( (int)v13[1] <= 0 )
      {
        v13 = (_DWORD *)*v13;
        if ( !v13 )
        {
          KeSetEvent(*(PRKEVENT *)(v3 + 16), 1, 0);
          return;
        }
      }
      KeSetEvent(*(PRKEVENT *)(v13[3] + 400), 1, 0);
    }
  }
}
