/*
 * XREFs of ?CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z @ 0x12096
 * Callers:
 *     ?DoGlobalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z @ 0xADA8C (-DoGlobalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z.c)
 *     ?xxxDoLocalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z @ 0x15572D (-xxxDoLocalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?CreateNotify@@YGPAUtagNOTIFY@@PAUtagEVENTHOOK@@KPAUtagWND@@JJPAUtagTHREADINFO@@KE@Z @ 0x9D858 (-CreateNotify@@YGPAUtagNOTIFY@@PAUtagEVENTHOOK@@KPAUtagWND@@JJPAUtagTHREADINFO@@KE@Z.c)
 *     ?RemoveNotify@@YGXPAUtagNOTIFY@@@Z @ 0xA3C88 (-RemoveNotify@@YGXPAUtagNOTIFY@@@Z.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __userpurge CreateAndPostTSFNotify(
        struct tagEVENTHOOK *a1@<edx>,
        unsigned int a2,
        struct tagWND *a3,
        int a4,
        int a5,
        struct tagTHREADINFO *a6,
        struct tagTHREADINFO *a7,
        unsigned int a8)
{
  struct tagNOTIFY *Notify; // esi
  unsigned int v9; // [esp+0h] [ebp-1Ch]
  int v10; // [esp+0h] [ebp-1Ch]
  struct tagNOTIFY *v11; // [esp+0h] [ebp-1Ch]
  unsigned __int8 v12; // [esp+4h] [ebp-18h]
  struct tagINPUT_MESSAGE_SOURCE *v13; // [esp+4h] [ebp-18h]
  _BYTE v14[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(a4 + 236) )
  {
    if ( a4 != _gptiRit )
    {
      Notify = CreateNotify(a1, a2, a3, a5, (int)a6, (struct tagTHREADINFO *)1, v9, v12);
      if ( Notify )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
        *((_DWORD *)Notify + 10) |= 0xCu;
        if ( !PostEventMessageEx((struct tagTHREADINFO *)0xC, 0, 0, 0, (unsigned int)Notify, 0, v10, v13) )
          RemoveNotify(v11);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
      }
    }
  }
}
