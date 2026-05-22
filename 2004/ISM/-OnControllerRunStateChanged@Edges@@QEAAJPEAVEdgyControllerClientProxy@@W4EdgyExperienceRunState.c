/*
 * XREFs of ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x180179470
 * Callers:
 *     ?OnRunStateChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800FFC60 (-OnRunStateChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x18017780C (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x180178BBC (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 */

__int64 __fastcall Edges::OnControllerRunStateChanged(Edges *a1, __int64 a2, int a3)
{
  const unsigned __int16 *v3; // rdx
  unsigned int v6; // ebx
  int Edge; // eax
  __int64 v8; // rdx

  v3 = (const unsigned __int16 *)(a2 + 88);
  v6 = -2147024809;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(const unsigned __int16 **)v3;
  Edge = Edges::FindEdge(a1, v3);
  if ( Edge >= 0 )
  {
    v8 = (__int64)Edge << 7;
    v6 = 0;
    *(_DWORD *)(v8 + *(_QWORD *)a1 + 48) = a3;
    *(_BYTE *)(v8 + *(_QWORD *)a1 + 52) = a3 != 0;
  }
  return v6;
}
