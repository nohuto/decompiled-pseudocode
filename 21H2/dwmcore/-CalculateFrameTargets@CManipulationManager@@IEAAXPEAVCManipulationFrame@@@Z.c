/*
 * XREFs of ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017C078
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017DD54 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18002B610 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x18017C890 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18017C900 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x18018683C (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x180186E5C (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 */

void __fastcall CManipulationManager::CalculateFrameTargets(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int v4; // ebp
  bool IsMousewheelFrame; // r15
  __int64 v6; // rdx
  __int64 v7; // r14
  struct IManipulationContext *v8; // rbx
  int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  struct IManipulationContext *v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v6 + 16) )
  {
    do
    {
      v7 = 248LL * v4;
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (char *)this + 184,
        &v15,
        (char *)a2 + v7 + 372);
      v8 = v15;
      if ( v15 && ((*(_DWORD *)((_BYTE *)a2 + v7 + 380) & 0x40004) != 0 || IsMousewheelFrame) )
      {
        if ( (int)CGestureTargetingManager::ProcessInput(v15, (struct CManipulationFrame *)((char *)a2 + v7 + 368)) < 0 )
        {
          *((_DWORD *)v8 + 6) = 1;
        }
        else if ( *((_DWORD *)v8 + 6) != 1 )
        {
          *((_DWORD *)v8 + 6) = 2;
        }
      }
      Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v15);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a2 + 4) );
  }
  v9 = 0;
  if ( *((int *)this + 54) > 0 )
  {
    v10 = 0LL;
    do
    {
      v11 = *((_QWORD *)this + 26);
      if ( *(_DWORD *)(*(_QWORD *)(v10 + v11) + 24LL) == 2 )
      {
        v12 = ConvertToInputType(*((_DWORD *)a2 + 92), *((_DWORD *)a2 + 95));
        CGestureTargetingManager::ProcessInteractions(v13, v12);
        v11 = *((_QWORD *)this + 26);
      }
      v14 = *(_QWORD *)(v10 + v11);
      ++v9;
      v10 += 8LL;
      *(_DWORD *)(v14 + 24) = 0;
    }
    while ( v9 < *((_DWORD *)this + 54) );
  }
}
