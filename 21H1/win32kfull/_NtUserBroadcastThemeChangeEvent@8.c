/*
 * XREFs of _NtUserBroadcastThemeChangeEvent@8 @ 0xE78DA
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int __userpurge NtUserBroadcastThemeChangeEvent@<eax>(int a1@<esi>, struct tagWND *a2, unsigned int a3)
{
  int v3; // ebx
  int v4; // edi
  int i; // esi
  int v7; // [esp-4h] [ebp-14h]
  struct tagINPUT_MESSAGE_SOURCE *v8; // [esp+0h] [ebp-10h]
  _BYTE v9[8]; // [esp+8h] [ebp-8h] BYREF

  v3 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  v4 = _gppiList;
  if ( _gppiList )
  {
    v7 = a1;
    do
    {
      for ( i = *(_DWORD *)(v4 + 180); i; i = *(_DWORD *)(i + 364) )
      {
        if ( *(_DWORD *)(i + 504) )
        {
          PostEventMessageEx((struct tagTHREADINFO *)0x19, 0, 0, a2, a3, 0, v7, v8);
          v3 = 1;
        }
      }
      v4 = *(_DWORD *)(v4 + 208);
    }
    while ( v4 );
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
  UserSessionSwitchLeaveCrit();
  return v3;
}
